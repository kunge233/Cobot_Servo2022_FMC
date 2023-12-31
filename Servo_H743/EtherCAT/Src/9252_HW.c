/*******************************************************************************
 LAN9252 Hardware Abtraction Layer - Implementation file

  Company:
    Microchip Technology Inc.

  File Name:
    9252_HW.c

  Description:
    This file  cContains the functional implementation of LAN9252 Hardware Abtraction Layer
	
  Change History:
    Version		Changes
	0.1			Initial version.
	0.2			-
	0.3			-
	0.4			*Disabled Sync Manager & Application Layer Event Requests.
				*Commented out the ISR call backs related to Sync Manager & AL Event Request.
	1.0			*Enabled Sync Manager & Application Layer Event Requests.
				*Added ISR call backs related to Sync Manager & AL Event Request.
*******************************************************************************/

/*******************************************************************************
Copyright (c) 2015 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED AS IS WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
 *******************************************************************************/

///////////////////////////////////////////////////////////////////////////////
// Included files
#include "PMPDriver.h"
#include "SPIDriver.h"
#include "ecat_def.h"
#include "gpio.h"
#include "spi.h"
#include "tim.h"

#ifdef PIC32_HW
    #include <sys/attribs.h>     /* For __ISR definition   */
#endif

#include "ecatslv.h"

#define  _9252_HW_ 1
#include "9252_HW.h"

#undef    _9252_HW_
#define    _9252_HW_ 0

#include "ecatappl.h"

#define SYNC0_ACTIVE_LOW         0x01
#define SYNC1_ACTIVE_LOW         0x01

#ifndef    PIC32_HW
    #define PIC32_HW	// Use PIC32MX board
#endif

///////////////////////////////////////////////////////////////////////////////
// Internal Type Defines

typedef union
{
    unsigned short    Word;
    unsigned char    Byte[2];
} UBYTETOWORD;

typedef union 
{
    UINT8           Byte[2];
    UINT16          Word;
}
UALEVENT;

/*-----------------------------------------------------------------------------------------
------
------    LED defines
------
-----------------------------------------------------------------------------------------*/

#define LED_ECATRED                    LATDbits.LATD1


#ifdef PIC32_HW
BOOL bEscInterrupt = 0;
BOOL bSync0Interrupt = 0;
BOOL bSync1Interrupt = 0;
BOOL bTimer5Interrupt = 0;
///////////////////////////////////////////////////////////////////////////////
// Global Interrupt setting

#define DISABLE_GLOBAL_INT          __set_BASEPRI(2 << 4)
#define ENABLE_GLOBAL_INT           __set_BASEPRI(0);
#define DISABLE_AL_EVENT_INT        DISABLE_GLOBAL_INT
#define ENABLE_AL_EVENT_INT         ENABLE_GLOBAL_INT


///////////////////////////////////////////////////////////////////////////////
// ESC Interrupt
    //0 - falling edge 1-
#define    INIT_ESC_INT           {MX_GPIO_Init();} 
#define    ESC_INT_REQ            (IFS0bits.INT0IF) //ESC Interrupt (INT0) state/flag
#define    INT_EL                 (_RD0) //ESC Interrupt input port
#define    EscIsr                 (EXTI1_IRQHandler) // primary interrupt vector name
#define    ACK_ESC_INT            {__HAL_GPIO_EXTI_CLEAR_IT(LAN9253_IRQ_Pin);}

#define IS_ESC_INT_ACTIVE    ((INT_EL) == 0) //0 - fro active low; 1 for hactive high
///////////////////////////////////////////////////////////////////////////////
// SYNC0 Interrupt

#ifndef RUN_FROM_SVB_FPGA

    #define    INIT_SYNC0_INT                  {MX_GPIO_Init();}  
    #define    SYNC0_INT_REQ                   (IFS0bits.INT1IF) //(_INT3IF) //Sync0 Interrupt (INT1) state
    #define    INT_SYNC0                       (_RE8) //Sync1 Interrupt input port
    #define    Sync0Isr                        (EXTI2_IRQHandler) // primary interrupt vector name
    #define    DISABLE_SYNC0_INT               {HAL_NVIC_DisableIRQ(SYNC0_EXTI_IRQn);}//{(_INT1IE)=0;}//disable interrupt source INT1
    #define    ENABLE_SYNC0_INT                {HAL_NVIC_EnableIRQ(SYNC0_EXTI_IRQn);} //enable interrupt source INT1
    #define    ACK_SYNC0_INT                   {__HAL_GPIO_EXTI_CLEAR_IT(SYNC0_Pin);}
    #define    SET_SYNC0_INT                   {(SYNC0_INT_REQ) = 1;}
    #define    SYNC0_INT_PORT_IS_ACTIVE        {(INT_EL) == 0;}
    #define    IS_SYNC0_INT_ACTIVE              ((INT_SYNC0) == 0) //0 - fro active low; 1 for hactive high

    #define    INIT_SYNC1_INT                   {MX_GPIO_Init();}
    #define    SYNC1_INT_REQ                    (IFS0bits.INT2IF) //(_INT4IF) //Sync1 Interrupt (INT2) state
    #define    INT_SYNC1                        (_RE9) //Sync1 Interrupt input port
    #define    Sync1Isr                         (EXTI3_IRQHandler) // primary interrupt vector name
    #define    DISABLE_SYNC1_INT                {HAL_NVIC_DisableIRQ(SYNC1_EXTI_IRQn);}//disable interrupt source INT2
    #define    ENABLE_SYNC1_INT                 {HAL_NVIC_EnableIRQ(SYNC1_EXTI_IRQn);} //enable interrupt source INT2
    #define    ACK_SYNC1_INT                    {__HAL_GPIO_EXTI_CLEAR_IT(SYNC1_Pin);}
    #define    SET_SYNC1_INT                    {(SYNC1_INT_REQ) = 1;}
    #define    SYNC1_INT_PORT_IS_ACTIVE         {(INT_EL) == 0;}
    #define    IS_SYNC1_INT_ACTIVE              ((INT_SYNC1) == 0) //0 - fro active low; 1 for hactive high
#else

	// Place-holder

#endif

///////////////////////////////////////////////////////////////////////////////
// Hardware timer

#define STOP_ECAT_TIMER         {HAL_NVIC_DisableIRQ(TIM2_IRQn);HAL_TIM_Base_Stop_IT(&htim2); /*disable timer*/}
#define INIT_ECAT_TIMER         {MX_TIM2_Init();/*clear timer register*/ }

#define START_ECAT_TIMER         {HAL_NVIC_EnableIRQ(TIM2_IRQn);HAL_TIM_Base_Start_IT(&htim2); /*enable timer*/ }

#endif // end of PIC32_HW

///////////////////////////////////////////////////////////////////////////////
// Internal Variables

UALEVENT      EscALEvent;     // contains the content of the ALEvent register (0x220), this variable is updated on each Access to the Esc
UINT16        nAlEventMask;   // current ALEventMask (content of register 0x204:0x205)
TSYNCMAN      TmpSyncMan;

///////////////////////////////////////////////////////////////////////////////
// Internal functions

/*******************************************************************************
  Function:
    void GetInterruptRegister(void)

  Summary:
    The function operates a SPI access without addressing.

  Description:
    The first two bytes of an access to the EtherCAT ASIC always deliver the AL_Event register (0x220).
    It will be saved in the global "EscALEvent"
  *****************************************************************************/

static void GetInterruptRegister(void)
{
      DISABLE_AL_EVENT_INT;
      HW_EscReadIsr((MEM_ADDR *)&EscALEvent.Word, 0x220, 2);
      ENABLE_AL_EVENT_INT;

}


/*******************************************************************************
  Function:
    void ISR_GetInterruptRegister(void)

  Summary:
    The function operates a SPI access without addressing.
        Shall be implemented if interrupts are supported else this function is equal to "GetInterruptRegsiter()"

  Description:
    The first two bytes of an access to the EtherCAT ASIC always deliver the AL_Event register (0x220).
        It will be saved in the global "EscALEvent"
  *****************************************************************************/

static void ISR_GetInterruptRegister(void)
{
     HW_EscReadIsr((MEM_ADDR *)&EscALEvent.Word, 0x220, 2);
}


///////////////////////////////////////////////////////////////////////////////
// Exported HW Access functions


/*******************************************************************************
  Function:
    UINT8 HW_Init(void)

  Summary:
    This function intialize the Process Data Interface (PDI) and the host controller.

  Description:
    
  *****************************************************************************/

UINT8 HW_Init(void)
{

    UINT16 intMask;
    UINT32 data;

    do
    {
        intMask = 0x93;
        HW_EscWriteWord(intMask, ESC_AL_EVENTMASK_OFFSET);
       
        intMask = 0;
        HW_EscReadWord(intMask, ESC_AL_EVENTMASK_OFFSET);
    } while (intMask != 0x93);

   
    //IRQ enable,IRQ polarity, IRQ buffer type in Interrupt Configuration register.
    //Wrte 0x54 - 0x00000101
    data = 0x00000101;

#ifndef USE_SPI
    #if defined(HBI_INDEXED_16BIT) | defined(HBI_INDEXED_8BIT)
        PMPWriteDWord (0,0x54);
        PMPWriteDWord (4,data);
    #else
        PMPWriteDWord (0x54, data);
    #endif
#else
    SPIWriteDWord (0x54, data);
#endif
    

    //Write in Interrupt Enable register -->
    //Write 0x5c - 0x00000001
    data = 0x00000001;

#ifndef USE_SPI
    #if defined(HBI_INDEXED_16BIT) | defined(HBI_INDEXED_8BIT)
        PMPWriteDWord (0,0x5C);
        PMPWriteDWord (4,data);
    #else
        PMPWriteDWord (0x5C, data);
    #endif
    
#else
    SPIWriteDWord (0x5C, data);
#endif

    //Read Interrupt Status register
    //Read 0x58.

#ifndef USE_SPI
    #if defined(HBI_INDEXED_16BIT) | defined(HBI_INDEXED_8BIT)
        PMPWriteDWord (0,0x58);
        data = PMPReadDWord (4);
    #else
        data = PMPReadDWord(0x58);
    #endif 
#else
    SPIReadDWord(0x58);
#endif

#ifdef DC_SUPPORTED
#ifndef RUN_FROM_SVB_FPGA

    MX_GPIO_Init();
    // HW_ResetALEventMask(0);
    ENABLE_ESC_INT();
    ENABLE_SYNC0_INT;
    ENABLE_SYNC1_INT;
    
    INIT_ECAT_TIMER;
    START_ECAT_TIMER;

#else

    //This is used in SVBS and FPAGA
    //1.Set Synch0 and Synch 1 as inputs
    TRISBSET = 0x08;	// Set only RB3 as input.
    TRISGSET = 0x40;    // Set only PMA5/RG5 as input.

    //2.Enable DIGIO mode for synch0
    AD1PCFGSET = 0x0008;	// AN3 only as Digital IO for 

    // 3. Enable CN Module
    CNCON = 0x8000;

    // 4. Enable Interrupt on CN5 and CN8
    CNENSET = 0x00000020; // Enable individual CN pin CN5
    CNPUESET = 0x00000020; // Enable weak pull up for pin CN5
    CNENSET = 0x00000100; // Enable individual CN pin CN8
    CNPUESET = 0x00000100; // Enable weak pull up for pin CN8

    // 5. read port to clear mismatch
    data = PORTB;
    data = PORTG;

    // 6. Init Interrupt  // Interrupt priority registers are different for different variants of PIC32.
    IPC6SET = 0x00140000; // Set priority level=5
    IPC6SET = 0x00030000; // Set Subpriority level=3

    // 7. Clear Interrupt Flag
    IFS1CLR = 0x0001; // Clear the interrupt flag status bit

    // 8. Enable CN Interrupt
    IEC1SET = 0x0001; // Enable Change Notice interrupts
#endif

#endif
    ENABLE_GLOBAL_INT;

    return 0;
}


/*******************************************************************************
  Function:
    void HW_Release(void)

  Summary:
    This function shall be implemented if hardware resources need to be release
        when the sample application stops

  Description:
  *****************************************************************************/

void HW_Release(void)
{

}


/*******************************************************************************
  Function:
    UINT16 HW_GetALEventRegister(void)

  Summary:
    This function gets the current content of ALEvent register.

  Description:
    Returns first two Bytes of ALEvent register (0x220)
  *****************************************************************************/

UINT16 HW_GetALEventRegister(void)
{
    GetInterruptRegister();
    return EscALEvent.Word;
}


/*******************************************************************************
  Function:
    UINT16 HW_GetALEventRegister_Isr(void)

  Summary:
    The SPI PDI requires an extra ESC read access functions from interrupts service routines.
        The behaviour is equal to "HW_GetALEventRegister()"

  Description:
    Returns  first two Bytes of ALEvent register (0x220)
  *****************************************************************************/

UINT16 HW_GetALEventRegister_Isr(void)
{
     ISR_GetInterruptRegister();
    return EscALEvent.Word;
}


/*******************************************************************************
  Function:
    void HW_ResetALEventMask(UINT16 intMask)

  Summary:
    This function makes an logical and with the AL Event Mask register (0x204)

  Description:
    Input param: intMask - interrupt mask (disabled interrupt shall be zero)
  *****************************************************************************/

void HW_ResetALEventMask(UINT16 intMask)
{
    UINT16 mask;

    HW_EscReadWord(mask, ESC_AL_EVENTMASK_OFFSET);

    mask &= intMask;
    DISABLE_AL_EVENT_INT;
    HW_EscWriteWord(mask, ESC_AL_EVENTMASK_OFFSET);
    HW_EscReadWord(nAlEventMask, ESC_AL_EVENTMASK_OFFSET);
    ENABLE_AL_EVENT_INT;
}


/*******************************************************************************
  Function:
    void HW_SetALEventMask(UINT16 intMask)

  Summary:
    This function makes an logical or with the AL Event Mask register (0x204)

  Description:
    Input param: intMask - interrupt mask (disabled interrupt shall be zero)
  *****************************************************************************/

void HW_SetALEventMask(UINT16 intMask)
{
    UINT16 mask;

    HW_EscReadWord(mask, ESC_AL_EVENTMASK_OFFSET);

    mask |= intMask;
    DISABLE_AL_EVENT_INT;
    HW_EscWriteWord(mask, ESC_AL_EVENTMASK_OFFSET);
    HW_EscReadWord(nAlEventMask, ESC_AL_EVENTMASK_OFFSET);
    ENABLE_AL_EVENT_INT;
}


/*******************************************************************************
  Function:
    void HW_EscRead( MEM_ADDR *pData, UINT16 Address, UINT16 Len )

  Summary:
    This function operates the SPI read access to the EtherCAT ASIC.

  Description:
    Input param:
     pData    - Pointer to a byte array which holds data to write or saves read data.
     Address  - EtherCAT ASIC address ( upper limit is 0x1FFF )    for access.
     Len      - Access size in Bytes.
  *****************************************************************************/

void HW_EscRead( MEM_ADDR *pData, UINT16 Address, UINT16 Len )
{
    UINT16 i;
    UINT8 *pTmpData = (UINT8 *)pData;

    /* loop for all bytes to be read */
    while ( Len > 0 )
    {
        if (Address >= 0x1000)
        {
            i = Len;
        }
        else
        {
            i= (Len > 4) ? 4 : Len;

            if(Address & 01)
            {
               i=1;
            }
            else if (Address & 02)
            {
               i= (i&1) ? 1:2;
            }
            else if (i == 03)
            {
                i=1;
            }
        }

        DISABLE_AL_EVENT_INT;

#ifndef USE_SPI
       PMPReadDRegister(pTmpData,Address,i);
#else
       SPIReadDRegister(pTmpData,Address,i);
#endif
      
       ENABLE_AL_EVENT_INT;

        Len -= i;
        pTmpData += i;
        Address += i;
    }

}

/////////////////////////////////////////////////////////////////////////////////////////
/**
 \param pData        Pointer to a byte array which holds data to write or saves read data.
 \param Address     EtherCAT ASIC address ( upper limit is 0x1FFF )    for access.
 \param Len            Access size in Bytes.

\brief  The SPI PDI requires an extra ESC read access functions from interrupts service routines.
        The behaviour is equal to "HW_EscRead()"
*////////////////////////////////////////////////////////////////////////////////////////

/*******************************************************************************
  Function:
    void HW_EscReadIsr( MEM_ADDR *pData, UINT16 Address, UINT16 Len )

  Summary:
    The SPI PDI requires an extra ESC read access functions from interrupts service routines.
        The behaviour is equal to "HW_EscRead()"

  Description:
    Input param:
    pData          - Pointer to a byte array which holds data to write or saves read data.
    param Address  - EtherCAT ASIC address ( upper limit is 0x1FFF ) for access.
    param Len      - Access size in Bytes.
  *****************************************************************************/

void HW_EscReadIsr( MEM_ADDR *pData, UINT16 Address, UINT16 Len )
{

   UINT16 i;
   UINT8 *pTmpData = (UINT8 *)pData;

    /* send the address and command to the ESC */

    /* loop for all bytes to be read */
   while ( Len > 0 )
   {

        if (Address >= 0x1000)
        {
            i = Len;
        }
        else
        {
            i= (Len > 4) ? 4 : Len;

            if(Address & 01)
            {
               i=1;
            }
            else if (Address & 02)
            {
               i= (i&1) ? 1:2;
            }
            else if (i == 03)
            {
                i=1;
            }
        }

    #ifndef USE_SPI
        PMPReadDRegister(pTmpData, Address,i);
    #else
        SPIReadDRegister(pTmpData, Address,i);
    #endif

        Len -= i;
        pTmpData += i;
        Address += i;
    }
   
}


/*******************************************************************************
  Function:
    void HW_EscWrite( MEM_ADDR *pData, UINT16 Address, UINT16 Len )

  Summary:
    This function operates the SPI write access to the EtherCAT ASIC.

  Description:
    Input param:
    pData          - Pointer to a byte array which holds data to write or saves write data.
    param Address  - EtherCAT ASIC address ( upper limit is 0x1FFF ) for access.
    param Len      - Access size in Bytes.
  *****************************************************************************/

void HW_EscWrite( MEM_ADDR *pData, UINT16 Address, UINT16 Len )
{

    UINT16 i;
    UINT8 *pTmpData = (UINT8 *)pData;

    /* loop for all bytes to be written */
    while ( Len )
    {

        if (Address >= 0x1000)
        {
            i = Len;
        }
        else
        {
            i= (Len > 4) ? 4 : Len;

            if(Address & 01)
            {
               i=1;
            }
            else if (Address & 02)
            {
               i= (i&1) ? 1:2;
            }
            else if (i == 03)
            {
                i=1;
            }
        }

        DISABLE_AL_EVENT_INT;
       
        /* start transmission */
#ifndef USE_SPI
        PMPWriteRegister(pTmpData, Address, i);
#else
        SPIWriteRegister(pTmpData, Address, i);
#endif

        ENABLE_AL_EVENT_INT;

       
   
        /* next address */
        Len -= i;
        pTmpData += i;
        Address += i;

    }

}


/*******************************************************************************
  Function:
    void HW_EscWriteIsr( MEM_ADDR *pData, UINT16 Address, UINT16 Len )

  Summary:
    The SPI PDI requires an extra ESC write access functions from interrupts service routines.
        The behaviour is equal to "HW_EscWrite()"

  Description:
    Input param:
    pData          - Pointer to a byte array which holds data to write or saves write data.
    param Address  - EtherCAT ASIC address ( upper limit is 0x1FFF ) for access.
    param Len      - Access size in Bytes.
  *****************************************************************************/

void HW_EscWriteIsr( MEM_ADDR *pData, UINT16 Address, UINT16 Len )
{

    UINT16 i ;
    UINT8 *pTmpData = (UINT8 *)pData;

  
    /* loop for all bytes to be written */
    while ( Len )
    {

        if (Address >= 0x1000)
        {
            i = Len;
        }
        else
        {
            i= (Len > 4) ? 4 : Len;

            if(Address & 01)
            {
               i=1;
            }
            else if (Address & 02)
            {
               i= (i&1) ? 1:2;
            }
            else if (i == 03)
            {
                i=1;
            }
        }
        
       /* start transmission */
    #ifndef USE_SPI
       PMPWriteRegister(pTmpData, Address, i);
    #else
       SPIWriteRegister(pTmpData, Address, i);
    #endif
       
       /* next address */
        Len -= i;
        pTmpData += i;
        Address += i;
    }

}

/*******************************************************************************

 \param RunLed            desired EtherCAT Run led state
 \param ErrLed            desired EtherCAT Error led state

  \brief    This function updates the EtherCAT run and error led
  *****************************************************************************/
void HW_SetLed(UINT8 RunLed,UINT8 ErrLed)
{
    /* Here RunLed is not used. Because on chip supported RUN Led is available*/    
    // LED_ECATRED   = ErrLed;
}
