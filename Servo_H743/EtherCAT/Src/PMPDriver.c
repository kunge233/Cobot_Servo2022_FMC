/*******************************************************************************
 PIC32 Host Bus Interface Driver

  Company:
    Microchip Technology Inc.

  File Name:
    PMPDriver.c

  Summary:
    Contains the functional implementation of PIC32 Host Bus Interface Driver

  Description:
    This file contains the functional implementation of PIC32 Host Bus Interface
Driver

  Change History:
    Version		Changes
        0.1			Initial version.
        0.2			-
        0.3			-
        0.4			-
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

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include "PMPDriver.h"
#include "9252_HW.h"

typedef union {
  uint32_t Val;
  uint8_t v[4];
  uint16_t w[2];
  struct {
    uint8_t LB;
    uint8_t HB;
    uint8_t UB;
    uint8_t MB;
  } byte;
} UINT32_VAL;

typedef union {
  uint16_t Val;
  struct {
    uint8_t LB;
    uint8_t HB;
  } byte;
} UINT16_VAL;

UINT32 PMPReadDWord(UINT16 Address) {
  UINT32_VAL res;
  // res.Val = *(__IO uint32_t *)(NOR_MEMORY_ADRESS1 + Address);
  // res.w[0] = *(__IO uint16_t *)(NOR_MEMORY_ADRESS1 + Address);
  Address += 2;
  // res.w[1] = *(__IO uint16_t *)(NOR_MEMORY_ADRESS1 + Address);
  return res.Val;
}

#ifdef FIFODUMP_SUPPORT
FIFODATA FIFOData;
UINT16 FIFODataIdx = 0;
#endif

void PMPWriteDWord(UINT16 Address, UINT32 Val) {
  UINT32_VAL str;
  str.Val = Val;
  // *(uint32_t *)(NOR_MEMORY_ADRESS1 + Address) = Val;
  // (*(uint16_t *)(NOR_MEMORY_ADRESS1 + Address)) = str.w[0];
  Address += 2;
  // (*(uint16_t *)(NOR_MEMORY_ADRESS1 + Address)) = str.w[1];
}

void PMPReadRegUsingCSR(UINT8 *ReadBuffer, UINT16 Address, UINT8 Count) {
  UINT32_VAL param32_1 = {0};
  UINT8 i = 0;

  param32_1.w[0] = Address;
  param32_1.v[2] = Count;
  param32_1.v[3] = PRAM_RW_BUSY_8B | PRAM_SET_READ;
#ifdef HBI_INDEXED_MODE
  PMPWriteDWord(HBI_INDEXED_INDEX0_REG, CSR_CMD_REG);
  PMPWriteDWord(HBI_INDEXED_DATA0_REG, param32_1.Val);
#else
  PMPWriteDWord(CSR_CMD_REG, param32_1.Val);
#endif

  do {
#ifdef HBI_INDEXED_MODE
    param32_1.Val = PMPReadDWord(HBI_INDEXED_DATA0_REG);
#else
    param32_1.Val = PMPReadDWord(CSR_CMD_REG);
#endif
  } while (param32_1.v[3] & PRAM_RW_BUSY_8B);

#ifdef HBI_INDEXED_MODE
  PMPWriteDWord(HBI_INDEXED_INDEX0_REG, CSR_DATA_REG);
  param32_1.Val = PMPReadDWord(HBI_INDEXED_DATA0_REG);
#else
  param32_1.Val = PMPReadDWord(CSR_DATA_REG);
#endif

  for (i = 0; i < Count; i++)
    ReadBuffer[i] = param32_1.v[i];

  return;
}

void PMPWriteRegUsingCSR(UINT8 *WriteBuffer, UINT16 Address, UINT8 Count) {
  UINT32_VAL param32_1 = {0};
  UINT8 i = 0;

  for (i = 0; i < Count; i++)
    param32_1.v[i] = WriteBuffer[i];

#ifdef HBI_INDEXED_MODE
  PMPWriteDWord(HBI_INDEXED_INDEX0_REG, CSR_DATA_REG);
  PMPWriteDWord(HBI_INDEXED_DATA0_REG, param32_1.Val);
#else
  PMPWriteDWord(CSR_DATA_REG, param32_1.Val);
#endif

  param32_1.w[0] = Address;
  param32_1.v[2] = Count;
  param32_1.v[3] = PRAM_RW_BUSY_8B | PRAM_SET_WRITE;

#ifdef HBI_INDEXED_MODE
  PMPWriteDWord(HBI_INDEXED_INDEX0_REG, CSR_CMD_REG);
  PMPWriteDWord(HBI_INDEXED_DATA0_REG, param32_1.Val);
#else
  PMPWriteDWord(CSR_CMD_REG, param32_1.Val);
#endif

  do {

#ifdef HBI_INDEXED_MODE
    param32_1.Val = PMPReadDWord(HBI_INDEXED_DATA0_REG);
#else
    param32_1.Val = PMPReadDWord(CSR_CMD_REG);
#endif
  } while (param32_1.v[3] & PRAM_RW_BUSY_8B);

  return;
}

void PMPReadPDRamRegister(UINT8 *ReadBuffer, UINT16 Address, UINT16 Count) {
  UINT32_VAL param32_1 = {0};
  UINT8 i = 0, nlength, nBytePosition;
  UINT8 nReadSpaceAvblCount;
  UINT16 RefAddr = Address;

  /*Reset/Abort any previous commands.*/
  param32_1.Val = PRAM_RW_ABORT_MASK;

#ifdef HBI_INDEXED_MODE
  /*Set index register 8 for PRAM_READ_CMD_REG.*/
  PMPWriteDWord(HBI_INDEXED_INDEX1_REG, PRAM_READ_CMD_REG);
  PMPWriteDWord(HBI_INDEXED_DATA1_REG, param32_1.Val);
#else
  PMPWriteDWord(PRAM_READ_CMD_REG, param32_1.Val);
#endif

  /*The host should not modify this field unless the PRAM Read Busy
  (PRAM_READ_BUSY) bit is a 0.*/
  do {

#ifdef HBI_INDEXED_MODE
    param32_1.Val = PMPReadDWord(HBI_INDEXED_DATA1_REG);
#else
    param32_1.Val = PMPReadDWord(PRAM_READ_CMD_REG);
#endif
  } while ((param32_1.v[3] & PRAM_RW_BUSY_8B));

  /*Write address and length in the EtherCAT Process RAM Read Address and
   * Length Register (ECAT_PRAM_RD_ADDR_LEN)*/
  param32_1.w[0] = Address;
  param32_1.w[1] = Count;

#ifdef HBI_INDEXED_MODE
  /*Set index register 0x10 for PRAM_READ_ADDR_LEN_OFFSET*/
  PMPWriteDWord(HBI_INDEXED_INDEX2_REG, PRAM_READ_ADDR_LEN_REG);
  PMPWriteDWord(HBI_INDEXED_DATA2_REG, param32_1.Val);
#else
  PMPWriteDWord(PRAM_READ_ADDR_LEN_REG, param32_1.Val);
#endif

  param32_1.Val = PMPReadDWord(HBI_INDEXED_DATA2_REG);
  /*Set PRAM Read Busy (PRAM_READ_BUSY) bit(-EtherCAT Process RAM Read Command
   * Register) to start read operatrion*/

  param32_1.Val = PRAM_RW_BUSY_32B; /*TODO:replace with #defines*/

#ifdef HBI_INDEXED_MODE
  PMPWriteDWord(HBI_INDEXED_DATA1_REG, param32_1.Val);
#else
  PMPWriteDWord(PRAM_READ_CMD_REG, param32_1.Val);
#endif

  /*Read PRAM Read Data Available (PRAM_READ_AVAIL) bit is set*/
  do {
#ifdef HBI_INDEXED_MODE
    param32_1.Val = PMPReadDWord(HBI_INDEXED_DATA1_REG);
#else
    param32_1.Val = PMPReadDWord(PRAM_READ_CMD_REG);
#endif
  } while (!(param32_1.v[0] & IS_PRAM_SPACE_AVBL_MASK));

  nReadSpaceAvblCount = param32_1.v[1] & PRAM_SPACE_AVBL_COUNT_MASK;

  /*Fifo registers are aliased address. In indexed it will read indexed data reg
   0x04, but it will point to reg 0 In other modes read 0x04 FIFO register since
   all registers are aliased*/

#ifdef HBI_INDEXED_MODE
  param32_1.Val = PMPReadDWord(HBI_INDEXED_PRAM_READ_WRITE_FIFO);
#else
  param32_1.Val = PMPReadDWord(PRAM_READ_FIFO_REG);
#endif
  nReadSpaceAvblCount--;
  nBytePosition = (Address & 0x03);
  nlength = (4 - nBytePosition) > Count ? Count : (4 - nBytePosition);
  memcpy(ReadBuffer + i, &param32_1.v[nBytePosition], nlength);
  Count -= nlength;
  i += nlength;

  while (Count && nReadSpaceAvblCount) {
#ifdef HBI_INDEXED_MODE
    param32_1.Val = PMPReadDWord(HBI_INDEXED_PRAM_READ_WRITE_FIFO);
#else
    param32_1.Val = PMPReadDWord(PRAM_READ_FIFO_REG);
#endif

    nlength = Count > 4 ? 4 : Count;
    memcpy((ReadBuffer + i), &param32_1, nlength);

    i += nlength;
    Count -= nlength;
    nReadSpaceAvblCount--;

    if (!nReadSpaceAvblCount) {
#ifdef HBI_INDEXED_MODE
      param32_1.Val = PMPReadDWord(HBI_INDEXED_DATA1_REG);
#else
      param32_1.Val = PMPReadDWord(PRAM_READ_CMD_REG);
#endif

      nReadSpaceAvblCount = param32_1.v[1] & PRAM_SPACE_AVBL_COUNT_MASK;
    }
  }

  return;
}

void PMPWritePDRamRegister(UINT8 *WriteBuffer, UINT16 Address, UINT16 Count) {
  UINT32_VAL param32_1 = {0};
  UINT8 i = 0, nlength, nBytePosition, nWrtSpcAvlCount;
  UINT16 RefAddr = Address;

  /*Reset or Abort any previous commands.*/
  param32_1.Val = PRAM_RW_ABORT_MASK; /*TODO:replace with #defines*/
#ifdef HBI_INDEXED_MODE
  /*Set index register 0x8 and HBI_INDEXED_DATA1_REG for PRAM_WRITE_CMD_REG*/
  PMPWriteDWord(HBI_INDEXED_INDEX1_REG, PRAM_WRITE_CMD_REG);
  PMPWriteDWord(HBI_INDEXED_DATA1_REG, param32_1.Val);
#else
  PMPWriteDWord(PRAM_WRITE_CMD_REG, param32_1.Val);
#endif

  /*Make sure there is no previous write is pending
  (PRAM Write Busy) bit is a 0 */
  do {

#ifdef HBI_INDEXED_MODE
    param32_1.Val = PMPReadDWord(HBI_INDEXED_DATA1_REG);
#else
    param32_1.Val = PMPReadDWord(PRAM_WRITE_CMD_REG);
#endif
  } while ((param32_1.v[3] & PRAM_RW_BUSY_8B));

  /*Write Address and Length Register (ECAT_PRAM_WR_ADDR_LEN) with the
  starting byte address and length)*/
  param32_1.w[0] = Address;
  param32_1.w[1] = Count;

#ifdef HBI_INDEXED_MODE
  /*Set index register 0x10 and 0x14 for PRAM_WRITE_ADDR_LEN_REG*/
  PMPWriteDWord(HBI_INDEXED_INDEX2_REG, PRAM_WRITE_ADDR_LEN_REG);
  PMPWriteDWord(HBI_INDEXED_DATA2_REG, param32_1.Val);
#else
  PMPWriteDWord(PRAM_WRITE_ADDR_LEN_REG, param32_1.Val);
#endif

  /*write to the EtherCAT Process RAM Write Command Register (ECAT_PRAM_WR_CMD)
  with the  PRAM Write Busy (PRAM_WRITE_BUSY) bit set*/

  param32_1.Val = PRAM_RW_BUSY_32B;

#ifdef HBI_INDEXED_MODE
  PMPWriteDWord(HBI_INDEXED_DATA1_REG, param32_1.Val);
#else
  PMPWriteDWord(PRAM_WRITE_CMD_REG, param32_1.Val);
#endif

  /*Read PRAM write Data Available (PRAM_READ_AVAIL) bit is set*/
  do {
#ifdef HBI_INDEXED_MODE
    param32_1.Val = PMPReadDWord(HBI_INDEXED_DATA1_REG);
#else
    param32_1.Val = PMPReadDWord(PRAM_WRITE_CMD_REG);
#endif
  } while (!(param32_1.v[0] & IS_PRAM_SPACE_AVBL_MASK));

  /*Check write data available count*/
  nWrtSpcAvlCount = param32_1.v[1] & PRAM_SPACE_AVBL_COUNT_MASK;

  /*Write data to Write FIFO) */
  /*get the byte lenth for first read*/
  nBytePosition = (Address & 0x03);

  nlength = (4 - nBytePosition) > Count ? Count : (4 - nBytePosition);

  param32_1.Val = 0;
  memcpy(&param32_1.v[nBytePosition], WriteBuffer + i, nlength);

#ifdef HBI_INDEXED_MODE
  PMPWriteDWord(HBI_INDEXED_PRAM_READ_WRITE_FIFO, param32_1.Val);
#else
  PMPWriteDWord(PRAM_WRITE_FIFO_REG, param32_1.Val);
#endif
  nWrtSpcAvlCount--;
  Count -= nlength;
  i += nlength;

  while (nWrtSpcAvlCount && Count) {
    nlength = Count > 4 ? 4 : Count;
    param32_1.Val = 0;
    memcpy(&param32_1, (WriteBuffer + i), nlength);

#ifdef HBI_INDEXED_MODE
    PMPWriteDWord(HBI_INDEXED_PRAM_READ_WRITE_FIFO, param32_1.Val);
#else
    PMPWriteDWord(PRAM_WRITE_FIFO_REG, param32_1.Val);
#endif

    i += nlength;
    Count -= nlength;
    nWrtSpcAvlCount--;

    if (!nWrtSpcAvlCount) {
#ifdef HBI_INDEXED_MODE
      param32_1.Val = PMPReadDWord(HBI_INDEXED_DATA1_REG);
#else
      param32_1.Val = PMPReadDWord(PRAM_WRITE_CMD_REG);
#endif
      /*Check write data available count*/
      nWrtSpcAvlCount = param32_1.v[1] & PRAM_SPACE_AVBL_COUNT_MASK;
    }
  }
  return;
}

void PMPReadDRegister(UINT8 *ReadBuffer, UINT16 Address, UINT16 Count) {
  if (Address >= 0x1000) {
    PMPReadPDRamRegister(ReadBuffer, Address, Count);
  } else {
    PMPReadRegUsingCSR(ReadBuffer, Address, Count);
  }
}

void PMPWriteRegister(UINT8 *WriteBuffer, UINT16 Address, UINT16 Count) {

  if (Address >= 0x1000) {
    PMPWritePDRamRegister(WriteBuffer, Address, Count);
  } else {
    PMPWriteRegUsingCSR(WriteBuffer, Address, Count);
  }
}
