/**
* \addtogroup MyApplication MyApplication
* @{
*/

/**
\file MyApplicationObjects
\author ET9300Utilities.ApplicationHandler (Version 1.3.6.0) | EthercatSSC@beckhoff.com

\brief MyApplication specific objects<br>
\brief NOTE : This file will be overwritten if a new object dictionary is generated!<br>
*/

#if defined(_MY_APPLICATION_) && (_MY_APPLICATION_ == 1)
#define PROTO
#else
#define PROTO extern
#endif
/******************************************************************************
*                    Object 0x1600 : Receive PDO mapping 1 - Axis 0
******************************************************************************/
/**
* \addtogroup 0x1600 0x1600 | Receive PDO mapping 1 - Axis 0
* @{
* \brief Object 0x1600 (Receive PDO mapping 1 - Axis 0) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Controlword_0<br>
* SubIndex 2 - Modes_of_operation_0<br>
* SubIndex 3 - Target_position_0<br>
* SubIndex 4 - Touch_probe_function_0<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1600[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex1 - Controlword_0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex2 - Modes_of_operation_0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex3 - Target_position_0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }}; /* Subindex4 - Touch_probe_function_0 */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x1600[] = "Receive PDO mapping 1 - Axis 0\000"
"Controlword_0\000"
"Modes_of_operation_0\000"
"Target_position_0\000"
"Touch_probe_function_0\000\377";
#endif //#ifdef _OBJD_

#ifndef _MY_APPLICATION_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 SI1; /* Subindex1 -  */
UINT32 SI2; /* Subindex2 -  */
UINT32 SI3; /* Subindex3 -  */
UINT32 SI4; /* Subindex4 -  */
} OBJ_STRUCT_PACKED_END
TOBJ1600;
#endif //#ifndef _MY_APPLICATION_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1600 ReceivePDOMapping1Axis00x1600
#if defined(_MY_APPLICATION_) && (_MY_APPLICATION_ == 1)
={4,0x60400010,0x60600008,0x607A0020,0x60B80010}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1601 : Receive PDO mapping 2 - Axis 0
******************************************************************************/
/**
* \addtogroup 0x1601 0x1601 | Receive PDO mapping 2 - Axis 0
* @{
* \brief Object 0x1601 (Receive PDO mapping 2 - Axis 0) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Controlword_0<br>
* SubIndex 2 - Modes_of_operation_0<br>
* SubIndex 3 - Target_torque_0<br>
* SubIndex 4 - Target_position_0<br>
* SubIndex 5 - Max_motor_speed_0<br>
* SubIndex 6 - Touch_probe_function_0<br>
* SubIndex 7 - Target_velocity_0<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1601[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex1 - Controlword_0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex2 - Modes_of_operation_0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex3 - Target_torque_0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex4 - Target_position_0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex5 - Max_motor_speed_0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex6 - Touch_probe_function_0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }}; /* Subindex7 - Target_velocity_0 */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x1601[] = "Receive PDO mapping 2 - Axis 0\000"
"Controlword_0\000"
"Modes_of_operation_0\000"
"Target_torque_0\000"
"Target_position_0\000"
"Max_motor_speed_0\000"
"Touch_probe_function_0\000"
"Target_velocity_0\000\377";
#endif //#ifdef _OBJD_

#ifndef _MY_APPLICATION_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 SI1; /* Subindex1 -  */
UINT32 SI2; /* Subindex2 -  */
UINT32 SI3; /* Subindex3 -  */
UINT32 SI4; /* Subindex4 -  */
UINT32 SI5; /* Subindex5 -  */
UINT32 SI6; /* Subindex6 -  */
UINT32 SI7; /* Subindex7 -  */
} OBJ_STRUCT_PACKED_END
TOBJ1601;
#endif //#ifndef _MY_APPLICATION_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1601 ReceivePDOMapping2Axis00x1601
#if defined(_MY_APPLICATION_) && (_MY_APPLICATION_ == 1)
={7,0x60400010,0x60600008,0x60710010,0x607A0020,0x60800020,0x60B80010,0x60FF0020}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1602 : Receive PDO mapping 3 - Axis 0
******************************************************************************/
/**
* \addtogroup 0x1602 0x1602 | Receive PDO mapping 3 - Axis 0
* @{
* \brief Object 0x1602 (Receive PDO mapping 3 - Axis 0) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Controlword_0<br>
* SubIndex 2 - Modes_of_operation_0<br>
* SubIndex 3 - Max torque 0<br>
* SubIndex 4 - Target_position_0<br>
* SubIndex 5 - Touch_probe_function_0<br>
* SubIndex 6 - Target_velocity_0<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1602[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex1 - Controlword_0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex2 - Modes_of_operation_0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex3 - Max torque 0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex4 - Target_position_0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex5 - Touch_probe_function_0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }}; /* Subindex6 - Target_velocity_0 */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x1602[] = "Receive PDO mapping 3 - Axis 0\000"
"Controlword_0\000"
"Modes_of_operation_0\000"
"Max torque 0\000"
"Target_position_0\000"
"Touch_probe_function_0\000"
"Target_velocity_0\000\377";
#endif //#ifdef _OBJD_

#ifndef _MY_APPLICATION_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 SI1; /* Subindex1 -  */
UINT32 SI2; /* Subindex2 -  */
UINT32 SI3; /* Subindex3 -  */
UINT32 SI4; /* Subindex4 -  */
UINT32 SI5; /* Subindex5 -  */
UINT32 SI6; /* Subindex6 -  */
} OBJ_STRUCT_PACKED_END
TOBJ1602;
#endif //#ifndef _MY_APPLICATION_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1602 ReceivePDOMapping3Axis00x1602
#if defined(_MY_APPLICATION_) && (_MY_APPLICATION_ == 1)
={6,0x60400010,0x60600008,0x60720010,0x607A0020,0x60B80010,0x60FF0020}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1603 : Receive PDO mapping 4 - Axis 0
******************************************************************************/
/**
* \addtogroup 0x1603 0x1603 | Receive PDO mapping 4 - Axis 0
* @{
* \brief Object 0x1603 (Receive PDO mapping 4 - Axis 0) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Controlword_0<br>
* SubIndex 2 - Modes_of_operation_0<br>
* SubIndex 3 - Target_torque_0<br>
* SubIndex 4 - Max_torque_0<br>
* SubIndex 5 - Target_position_0<br>
* SubIndex 6 - Max_motor_speed_0<br>
* SubIndex 7 - Touch_probe_function_0<br>
* SubIndex 8 - Target_velocity_0<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1603[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex1 - Controlword_0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex2 - Modes_of_operation_0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex3 - Target_torque_0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex4 - Max_torque_0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex5 - Target_position_0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex6 - Max_motor_speed_0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex7 - Touch_probe_function_0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }}; /* Subindex8 - Target_velocity_0 */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x1603[] = "Receive PDO mapping 4 - Axis 0\000"
"Controlword_0\000"
"Modes_of_operation_0\000"
"Target_torque_0\000"
"Max_torque_0\000"
"Target_position_0\000"
"Max_motor_speed_0\000"
"Touch_probe_function_0\000"
"Target_velocity_0\000\377";
#endif //#ifdef _OBJD_

#ifndef _MY_APPLICATION_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 SI1; /* Subindex1 -  */
UINT32 SI2; /* Subindex2 -  */
UINT32 SI3; /* Subindex3 -  */
UINT32 SI4; /* Subindex4 -  */
UINT32 SI5; /* Subindex5 -  */
UINT32 SI6; /* Subindex6 -  */
UINT32 SI7; /* Subindex7 -  */
UINT32 SI8; /* Subindex8 -  */
} OBJ_STRUCT_PACKED_END
TOBJ1603;
#endif //#ifndef _MY_APPLICATION_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1603 ReceivePDOMapping4Axis00x1603
#if defined(_MY_APPLICATION_) && (_MY_APPLICATION_ == 1)
={8,0x60400010,0x60600008,0x60710010,0x60720010,0x607A0020,0x60800020,0x60B80010,0x60FF0020}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1A00 : Transmit PDO mapping 1 - Axis 0
******************************************************************************/
/**
* \addtogroup 0x1A00 0x1A00 | Transmit PDO mapping 1 - Axis 0
* @{
* \brief Object 0x1A00 (Transmit PDO mapping 1 - Axis 0) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Error_code_0<br>
* SubIndex 2 - Statusword_0<br>
* SubIndex 3 - Modes_of_operation_display_0<br>
* SubIndex 4 - Position_actual_value_0<br>
* SubIndex 5 - Touch_probe_status_0<br>
* SubIndex 6 - Touch_probe_pos1_pos_value_0<br>
* SubIndex 7 - Following_error_actual_value_0<br>
* SubIndex 8 - Digital_inputs_0<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1A00[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex1 - Error_code_0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex2 - Statusword_0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex3 - Modes_of_operation_display_0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex4 - Position_actual_value_0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex5 - Touch_probe_status_0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex6 - Touch_probe_pos1_pos_value_0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex7 - Following_error_actual_value_0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }}; /* Subindex8 - Digital_inputs_0 */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x1A00[] = "Transmit PDO mapping 1 - Axis 0\000"
"Error_code_0\000"
"Statusword_0\000"
"Modes_of_operation_display_0\000"
"Position_actual_value_0\000"
"Touch_probe_status_0\000"
"Touch_probe_pos1_pos_value_0\000"
"Following_error_actual_value_0\000"
"Digital_inputs_0\000\377";
#endif //#ifdef _OBJD_

#ifndef _MY_APPLICATION_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 SI1; /* Subindex1 -  */
UINT32 SI2; /* Subindex2 -  */
UINT32 SI3; /* Subindex3 -  */
UINT32 SI4; /* Subindex4 -  */
UINT32 SI5; /* Subindex5 -  */
UINT32 SI6; /* Subindex6 -  */
UINT32 SI7; /* Subindex7 -  */
UINT32 SI8; /* Subindex8 -  */
} OBJ_STRUCT_PACKED_END
TOBJ1A00;
#endif //#ifndef _MY_APPLICATION_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1A00 TransmitPDOMapping1Axis00x1A00
#if defined(_MY_APPLICATION_) && (_MY_APPLICATION_ == 1)
={8,0x603F0010,0x60410010,0x60610008,0x60640020,0x60B90010,0x60BA0020,0x60F40020,0x60FD0020}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1A01 : Transmit PDO mapping 2 - Axis 0
******************************************************************************/
/**
* \addtogroup 0x1A01 0x1A01 | Transmit PDO mapping 2 - Axis 0
* @{
* \brief Object 0x1A01 (Transmit PDO mapping 2 - Axis 0) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Error_code_0<br>
* SubIndex 2 - Statusword_0<br>
* SubIndex 3 - Modes_of_operation_display_0<br>
* SubIndex 4 - Position_actual_value_0<br>
* SubIndex 5 - Velocity_actual_value_0<br>
* SubIndex 6 - Torque_actual_value 0<br>
* SubIndex 7 - Touch_probe_status_0<br>
* SubIndex 8 - Touch_probe_pos1_pos_value_0<br>
* SubIndex 9 - Digital_inputs_0<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1A01[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex1 - Error_code_0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex2 - Statusword_0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex3 - Modes_of_operation_display_0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex4 - Position_actual_value_0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex5 - Velocity_actual_value_0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex6 - Torque_actual_value 0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex7 - Touch_probe_status_0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }, /* Subindex8 - Touch_probe_pos1_pos_value_0 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ }}; /* Subindex9 - Digital_inputs_0 */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x1A01[] = "Transmit PDO mapping 2 - Axis 0\000"
"Error_code_0\000"
"Statusword_0\000"
"Modes_of_operation_display_0\000"
"Position_actual_value_0\000"
"Velocity_actual_value_0\000"
"Torque_actual_value 0\000"
"Touch_probe_status_0\000"
"Touch_probe_pos1_pos_value_0\000"
"Digital_inputs_0\000\377";
#endif //#ifdef _OBJD_

#ifndef _MY_APPLICATION_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 SI1; /* Subindex1 -  */
UINT32 SI2; /* Subindex2 -  */
UINT32 SI3; /* Subindex3 -  */
UINT32 SI4; /* Subindex4 -  */
UINT32 SI5; /* Subindex5 -  */
UINT32 SI6; /* Subindex6 -  */
UINT32 SI7; /* Subindex7 -  */
UINT32 SI8; /* Subindex8 -  */
UINT32 SI9; /* Subindex9 -  */
} OBJ_STRUCT_PACKED_END
TOBJ1A01;
#endif //#ifndef _MY_APPLICATION_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1A01 TransmitPDOMapping2Axis00x1A01
#if defined(_MY_APPLICATION_) && (_MY_APPLICATION_ == 1)
={9,0x603F0010,0x60410010,0x60610008,0x60640020,0x606C0020,0x60770010,0x60B90010,0x60BA0020,0x60FD0020}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1C12 : Obj0x1C12
******************************************************************************/
/**
* \addtogroup 0x1C12 0x1C12 | Obj0x1C12
* @{
* \brief Object 0x1C12 (Obj0x1C12) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1C12[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ | ACCESS_WRITE_PREOP },
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | ACCESS_WRITE_PREOP }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x1C12[] = "Obj0x1C12\000\377";
#endif //#ifdef _OBJD_

#ifndef _MY_APPLICATION_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT16 aEntries[4];  /**< \brief Subindex 1 - 4 */
} OBJ_STRUCT_PACKED_END
TOBJ1C12;
#endif //#ifndef _MY_APPLICATION_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1C12 sRxPDOassign
#if defined(_MY_APPLICATION_) && (_MY_APPLICATION_ == 1)
={4,{0x1600,0x1601,0x1602,0x1603}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x1C13 : Obj0x1C13
******************************************************************************/
/**
* \addtogroup 0x1C13 0x1C13 | Obj0x1C13
* @{
* \brief Object 0x1C13 (Obj0x1C13) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x1C13[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ | ACCESS_WRITE_PREOP },
{ DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | ACCESS_WRITE_PREOP }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x1C13[] = "Obj0x1C13\000\377";
#endif //#ifdef _OBJD_

#ifndef _MY_APPLICATION_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT16 aEntries[2];  /**< \brief Subindex 1 - 2 */
} OBJ_STRUCT_PACKED_END
TOBJ1C13;
#endif //#ifndef _MY_APPLICATION_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ1C13 sTxPDOassign
#if defined(_MY_APPLICATION_) && (_MY_APPLICATION_ == 1)
={2,{0x1A00,0x1A01}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x30A5 : Axis0_SinglePos
******************************************************************************/
/**
* \addtogroup 0x30A5 0x30A5 | Axis0_SinglePos
* @{
* \brief Object 0x30A5 (Axis0_SinglePos) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x30A5 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x30A5[] = "Axis0_SinglePos\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_SinglePos0x30A5;
/** @}*/



/******************************************************************************
*                    Object 0x30A6 : Axis0_MultiPos
******************************************************************************/
/**
* \addtogroup 0x30A6 0x30A6 | Axis0_MultiPos
* @{
* \brief Object 0x30A6 (Axis0_MultiPos) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x30A6 = { DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x30A6[] = "Axis0_MultiPos\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO UINT32 Axis0_MultiPos0x30A6;
/** @}*/



/******************************************************************************
*                    Object 0x30A9 : Axis0_Actual_User_Rotates
******************************************************************************/
/**
* \addtogroup 0x30A9 0x30A9 | Axis0_Actual_User_Rotates
* @{
* \brief Object 0x30A9 (Axis0_Actual_User_Rotates) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x30A9 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x30A9[] = "Axis0_Actual_User_Rotates\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Actual_User_Rotates0x30A9;
/** @}*/



/******************************************************************************
*                    Object 0x30AA : Axis0_Actual_User_Position
******************************************************************************/
/**
* \addtogroup 0x30AA 0x30AA | Axis0_Actual_User_Position
* @{
* \brief Object 0x30AA (Axis0_Actual_User_Position) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - UserPosL32<br>
* SubIndex 2 - UserPosH32<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x30AA[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_RXPDOMAPPING | OBJACCESS_TXPDOMAPPING }, /* Subindex1 - UserPosL32 */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ | OBJACCESS_RXPDOMAPPING | OBJACCESS_TXPDOMAPPING }}; /* Subindex2 - UserPosH32 */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x30AA[] = "Axis0_Actual_User_Position\000"
"UserPosL32\000"
"UserPosH32\000\377";
#endif //#ifdef _OBJD_

#ifndef _MY_APPLICATION_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 UserPosL32; /* Subindex1 - UserPosL32 */
UINT32 UserPosH32; /* Subindex2 - UserPosH32 */
} OBJ_STRUCT_PACKED_END
TOBJ30AA;
#endif //#ifndef _MY_APPLICATION_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ30AA Axis0_Actual_User_Position0x30AA
#if defined(_MY_APPLICATION_) && (_MY_APPLICATION_ == 1)
={2,0,0}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x30B0 : Axis0_PSO_Function
******************************************************************************/
/**
* \addtogroup 0x30B0 0x30B0 | Axis0_PSO_Function
* @{
* \brief Object 0x30B0 (Axis0_PSO_Function) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x30B0 = { DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING | OBJACCESS_TXPDOMAPPING };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x30B0[] = "Axis0_PSO_Function\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO UINT16 Axis0_PSO_Function0x30B0;
/** @}*/



/******************************************************************************
*                    Object 0x30B1 : Axis0_PSO_Adjustment_Position
******************************************************************************/
/**
* \addtogroup 0x30B1 0x30B1 | Axis0_PSO_Adjustment_Position
* @{
* \brief Object 0x30B1 (Axis0_PSO_Adjustment_Position) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x30B1 = { DEFTYPE_INTEGER16 , 0x10 , ACCESS_READWRITE | OBJACCESS_RXPDOMAPPING | OBJACCESS_TXPDOMAPPING };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x30B1[] = "Axis0_PSO_Adjustment_Position\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT16 Axis0_PSO_Adjustment_Position0x30B1;
/** @}*/



/******************************************************************************
*                    Object 0x30C0 : Axis0_PSO_State
******************************************************************************/
/**
* \addtogroup 0x30C0 0x30C0 | Axis0_PSO_State
* @{
* \brief Object 0x30C0 (Axis0_PSO_State) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x30C0 = { DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_RXPDOMAPPING | OBJACCESS_TXPDOMAPPING };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x30C0[] = "Axis0_PSO_State\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO UINT16 Axis0_PSO_State0x30C0;
/** @}*/



/******************************************************************************
*                    Object 0x30C1 : Axis0_PSO_Current_ComparePoint
******************************************************************************/
/**
* \addtogroup 0x30C1 0x30C1 | Axis0_PSO_Current_ComparePoint
* @{
* \brief Object 0x30C1 (Axis0_PSO_Current_ComparePoint) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x30C1 = { DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ | OBJACCESS_RXPDOMAPPING | OBJACCESS_TXPDOMAPPING };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x30C1[] = "Axis0_PSO_Current_ComparePoint\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO UINT16 Axis0_PSO_Current_ComparePoint0x30C1;
/** @}*/



/******************************************************************************
*                    Object 0x30C2 : Axis0_PSO_Current_Position
******************************************************************************/
/**
* \addtogroup 0x30C2 0x30C2 | Axis0_PSO_Current_Position
* @{
* \brief Object 0x30C2 (Axis0_PSO_Current_Position) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x30C2 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ | OBJACCESS_RXPDOMAPPING | OBJACCESS_TXPDOMAPPING };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x30C2[] = "Axis0_PSO_Current_Position\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_PSO_Current_Position0x30C2;
/** @}*/



/******************************************************************************
*                    Object 0x3164 : Axis0_Pn000_Basic_Function_Selections_0
******************************************************************************/
/**
* \addtogroup 0x3164 0x3164 | Axis0_Pn000_Basic_Function_Selections_0
* @{
* \brief Object 0x3164 (Axis0_Pn000_Basic_Function_Selections_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3164 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3164[] = "Axis0_Pn000_Basic_Function_Selections_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn000_Basic_Function_Selections_00x3164;
/** @}*/



/******************************************************************************
*                    Object 0x3165 : Axis0_Pn001_Basic_Function_Selections_1
******************************************************************************/
/**
* \addtogroup 0x3165 0x3165 | Axis0_Pn001_Basic_Function_Selections_1
* @{
* \brief Object 0x3165 (Axis0_Pn001_Basic_Function_Selections_1) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3165 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3165[] = "Axis0_Pn001_Basic_Function_Selections_1\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn001_Basic_Function_Selections_10x3165;
/** @}*/



/******************************************************************************
*                    Object 0x3166 : Axis0_Pn002_Application_Function_Selections_2
******************************************************************************/
/**
* \addtogroup 0x3166 0x3166 | Axis0_Pn002_Application_Function_Selections_2
* @{
* \brief Object 0x3166 (Axis0_Pn002_Application_Function_Selections_2) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3166 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3166[] = "Axis0_Pn002_Application_Function_Selections_2\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn002_Application_Function_Selections_20x3166;
/** @}*/



/******************************************************************************
*                    Object 0x3167 : Axis0_Pn003_Application_Function_Selections_3
******************************************************************************/
/**
* \addtogroup 0x3167 0x3167 | Axis0_Pn003_Application_Function_Selections_3
* @{
* \brief Object 0x3167 (Axis0_Pn003_Application_Function_Selections_3) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3167 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3167[] = "Axis0_Pn003_Application_Function_Selections_3\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn003_Application_Function_Selections_30x3167;
/** @}*/



/******************************************************************************
*                    Object 0x3168 : Axis0_Pn004_Application_Function_Selections_4
******************************************************************************/
/**
* \addtogroup 0x3168 0x3168 | Axis0_Pn004_Application_Function_Selections_4
* @{
* \brief Object 0x3168 (Axis0_Pn004_Application_Function_Selections_4) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3168 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3168[] = "Axis0_Pn004_Application_Function_Selections_4\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn004_Application_Function_Selections_40x3168;
/** @}*/



/******************************************************************************
*                    Object 0x3169 : Axis0_Pn005_Application_Function_Selections_5
******************************************************************************/
/**
* \addtogroup 0x3169 0x3169 | Axis0_Pn005_Application_Function_Selections_5
* @{
* \brief Object 0x3169 (Axis0_Pn005_Application_Function_Selections_5) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3169 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3169[] = "Axis0_Pn005_Application_Function_Selections_5\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn005_Application_Function_Selections_50x3169;
/** @}*/



/******************************************************************************
*                    Object 0x316A : Axis0_Pn006_Application_Function_Selections_6
******************************************************************************/
/**
* \addtogroup 0x316A 0x316A | Axis0_Pn006_Application_Function_Selections_6
* @{
* \brief Object 0x316A (Axis0_Pn006_Application_Function_Selections_6) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x316A = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x316A[] = "Axis0_Pn006_Application_Function_Selections_6\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn006_Application_Function_Selections_60x316A;
/** @}*/



/******************************************************************************
*                    Object 0x316B : Axis0_Pn007_Application_Function_Selections_7
******************************************************************************/
/**
* \addtogroup 0x316B 0x316B | Axis0_Pn007_Application_Function_Selections_7
* @{
* \brief Object 0x316B (Axis0_Pn007_Application_Function_Selections_7) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x316B = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x316B[] = "Axis0_Pn007_Application_Function_Selections_7\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn007_Application_Function_Selections_70x316B;
/** @}*/



/******************************************************************************
*                    Object 0x316C : Axis0_Pn008_Power_On_Options
******************************************************************************/
/**
* \addtogroup 0x316C 0x316C | Axis0_Pn008_Power_On_Options
* @{
* \brief Object 0x316C (Axis0_Pn008_Power_On_Options) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x316C = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x316C[] = "Axis0_Pn008_Power_On_Options\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn008_Power_On_Options0x316C;
/** @}*/



/******************************************************************************
*                    Object 0x31C8 : Axis0_Pn100_Tuning_Function_Selection
******************************************************************************/
/**
* \addtogroup 0x31C8 0x31C8 | Axis0_Pn100_Tuning_Function_Selection
* @{
* \brief Object 0x31C8 (Axis0_Pn100_Tuning_Function_Selection) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31C8 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31C8[] = "Axis0_Pn100_Tuning_Function_Selection\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn100_Tuning_Function_Selection0x31C8;
/** @}*/



/******************************************************************************
*                    Object 0x31C9 : Axis0_Pn101_Response_Frequency_Level
******************************************************************************/
/**
* \addtogroup 0x31C9 0x31C9 | Axis0_Pn101_Response_Frequency_Level
* @{
* \brief Object 0x31C9 (Axis0_Pn101_Response_Frequency_Level) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31C9 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31C9[] = "Axis0_Pn101_Response_Frequency_Level\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn101_Response_Frequency_Level0x31C9;
/** @}*/



/******************************************************************************
*                    Object 0x31CA : Axis0_Pn102_Speed_Loop_Gain
******************************************************************************/
/**
* \addtogroup 0x31CA 0x31CA | Axis0_Pn102_Speed_Loop_Gain
* @{
* \brief Object 0x31CA (Axis0_Pn102_Speed_Loop_Gain) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31CA = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31CA[] = "Axis0_Pn102_Speed_Loop_Gain\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn102_Speed_Loop_Gain0x31CA;
/** @}*/



/******************************************************************************
*                    Object 0x31CB : Axis0_Pn103_Speed_Loop_Integral_Time
******************************************************************************/
/**
* \addtogroup 0x31CB 0x31CB | Axis0_Pn103_Speed_Loop_Integral_Time
* @{
* \brief Object 0x31CB (Axis0_Pn103_Speed_Loop_Integral_Time) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31CB = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31CB[] = "Axis0_Pn103_Speed_Loop_Integral_Time\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn103_Speed_Loop_Integral_Time0x31CB;
/** @}*/



/******************************************************************************
*                    Object 0x31CC : Axis0_Pn104_Position_Loop_Gain
******************************************************************************/
/**
* \addtogroup 0x31CC 0x31CC | Axis0_Pn104_Position_Loop_Gain
* @{
* \brief Object 0x31CC (Axis0_Pn104_Position_Loop_Gain) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31CC = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31CC[] = "Axis0_Pn104_Position_Loop_Gain\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn104_Position_Loop_Gain0x31CC;
/** @}*/



/******************************************************************************
*                    Object 0x31CD : Axis0_Pn105_Torque_Reference_Filter_Time_Constant
******************************************************************************/
/**
* \addtogroup 0x31CD 0x31CD | Axis0_Pn105_Torque_Reference_Filter_Time_Constant
* @{
* \brief Object 0x31CD (Axis0_Pn105_Torque_Reference_Filter_Time_Constant) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31CD = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31CD[] = "Axis0_Pn105_Torque_Reference_Filter_Time_Constant\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn105_Torque_Reference_Filter_Time_Constant0x31CD;
/** @}*/



/******************************************************************************
*                    Object 0x31CE : Axis0_Pn106_Load_Inertia_Percentage
******************************************************************************/
/**
* \addtogroup 0x31CE 0x31CE | Axis0_Pn106_Load_Inertia_Percentage
* @{
* \brief Object 0x31CE (Axis0_Pn106_Load_Inertia_Percentage) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31CE = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31CE[] = "Axis0_Pn106_Load_Inertia_Percentage\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn106_Load_Inertia_Percentage0x31CE;
/** @}*/



/******************************************************************************
*                    Object 0x31CF : Axis0_Pn107_Second_Speed_Loop_Gain
******************************************************************************/
/**
* \addtogroup 0x31CF 0x31CF | Axis0_Pn107_Second_Speed_Loop_Gain
* @{
* \brief Object 0x31CF (Axis0_Pn107_Second_Speed_Loop_Gain) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31CF = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31CF[] = "Axis0_Pn107_Second_Speed_Loop_Gain\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn107_Second_Speed_Loop_Gain0x31CF;
/** @}*/



/******************************************************************************
*                    Object 0x31D0 : Axis0_Pn108_Second_Speed_Loop_Integral_Time
******************************************************************************/
/**
* \addtogroup 0x31D0 0x31D0 | Axis0_Pn108_Second_Speed_Loop_Integral_Time
* @{
* \brief Object 0x31D0 (Axis0_Pn108_Second_Speed_Loop_Integral_Time) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31D0 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31D0[] = "Axis0_Pn108_Second_Speed_Loop_Integral_Time\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn108_Second_Speed_Loop_Integral_Time0x31D0;
/** @}*/



/******************************************************************************
*                    Object 0x31D1 : Axis0_Pn109_Second_Position_Loop_Gain
******************************************************************************/
/**
* \addtogroup 0x31D1 0x31D1 | Axis0_Pn109_Second_Position_Loop_Gain
* @{
* \brief Object 0x31D1 (Axis0_Pn109_Second_Position_Loop_Gain) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31D1 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31D1[] = "Axis0_Pn109_Second_Position_Loop_Gain\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn109_Second_Position_Loop_Gain0x31D1;
/** @}*/



/******************************************************************************
*                    Object 0x31D2 : Axis0_Pn110_Second_Torque_Reference_Filter_Time_Constant
******************************************************************************/
/**
* \addtogroup 0x31D2 0x31D2 | Axis0_Pn110_Second_Torque_Reference_Filter_Time_Constant
* @{
* \brief Object 0x31D2 (Axis0_Pn110_Second_Torque_Reference_Filter_Time_Constant) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31D2 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31D2[] = "Axis0_Pn110_Second_Torque_Reference_Filter_Time_Constant\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn110_Second_Torque_Reference_Filter_Time_Constant0x31D2;
/** @}*/



/******************************************************************************
*                    Object 0x31D4 : Axis0_Pn112_Speed_Feedforward
******************************************************************************/
/**
* \addtogroup 0x31D4 0x31D4 | Axis0_Pn112_Speed_Feedforward
* @{
* \brief Object 0x31D4 (Axis0_Pn112_Speed_Feedforward) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31D4 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31D4[] = "Axis0_Pn112_Speed_Feedforward\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn112_Speed_Feedforward0x31D4;
/** @}*/



/******************************************************************************
*                    Object 0x31D5 : Axis0_Pn113_Speed_Feedforward_Filter_Time_Constant
******************************************************************************/
/**
* \addtogroup 0x31D5 0x31D5 | Axis0_Pn113_Speed_Feedforward_Filter_Time_Constant
* @{
* \brief Object 0x31D5 (Axis0_Pn113_Speed_Feedforward_Filter_Time_Constant) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31D5 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31D5[] = "Axis0_Pn113_Speed_Feedforward_Filter_Time_Constant\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn113_Speed_Feedforward_Filter_Time_Constant0x31D5;
/** @}*/



/******************************************************************************
*                    Object 0x31D6 : Axis0_Pn114_Torque_Feedforward
******************************************************************************/
/**
* \addtogroup 0x31D6 0x31D6 | Axis0_Pn114_Torque_Feedforward
* @{
* \brief Object 0x31D6 (Axis0_Pn114_Torque_Feedforward) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31D6 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31D6[] = "Axis0_Pn114_Torque_Feedforward\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn114_Torque_Feedforward0x31D6;
/** @}*/



/******************************************************************************
*                    Object 0x31D7 : Axis0_Pn115_Torque_Feedforward_Filter_Time_Constant
******************************************************************************/
/**
* \addtogroup 0x31D7 0x31D7 | Axis0_Pn115_Torque_Feedforward_Filter_Time_Constant
* @{
* \brief Object 0x31D7 (Axis0_Pn115_Torque_Feedforward_Filter_Time_Constant) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31D7 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31D7[] = "Axis0_Pn115_Torque_Feedforward_Filter_Time_Constant\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn115_Torque_Feedforward_Filter_Time_Constant0x31D7;
/** @}*/



/******************************************************************************
*                    Object 0x31D8 : Axis0_Pn116_P_PI_Switching_Conditions
******************************************************************************/
/**
* \addtogroup 0x31D8 0x31D8 | Axis0_Pn116_P_PI_Switching_Conditions
* @{
* \brief Object 0x31D8 (Axis0_Pn116_P_PI_Switching_Conditions) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31D8 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31D8[] = "Axis0_Pn116_P_PI_Switching_Conditions\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn116_P_PI_Switching_Conditions0x31D8;
/** @}*/



/******************************************************************************
*                    Object 0x31D9 : Axis0_Pn117_P_PI_Switching_Level_for_Torque_Reference
******************************************************************************/
/**
* \addtogroup 0x31D9 0x31D9 | Axis0_Pn117_P_PI_Switching_Level_for_Torque_Reference
* @{
* \brief Object 0x31D9 (Axis0_Pn117_P_PI_Switching_Level_for_Torque_Reference) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31D9 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31D9[] = "Axis0_Pn117_P_PI_Switching_Level_for_Torque_Reference\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn117_P_PI_Switching_Level_for_Torque_Reference0x31D9;
/** @}*/



/******************************************************************************
*                    Object 0x31DA : Axis0_Pn118_P_PI_Switching_Level_for_Position_Deviation
******************************************************************************/
/**
* \addtogroup 0x31DA 0x31DA | Axis0_Pn118_P_PI_Switching_Level_for_Position_Deviation
* @{
* \brief Object 0x31DA (Axis0_Pn118_P_PI_Switching_Level_for_Position_Deviation) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31DA = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31DA[] = "Axis0_Pn118_P_PI_Switching_Level_for_Position_Deviation\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn118_P_PI_Switching_Level_for_Position_Deviation0x31DA;
/** @}*/



/******************************************************************************
*                    Object 0x31DB : Axis0_Pn119_P_PI_Switching_Level_for_Acceleration
******************************************************************************/
/**
* \addtogroup 0x31DB 0x31DB | Axis0_Pn119_P_PI_Switching_Level_for_Acceleration
* @{
* \brief Object 0x31DB (Axis0_Pn119_P_PI_Switching_Level_for_Acceleration) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31DB = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31DB[] = "Axis0_Pn119_P_PI_Switching_Level_for_Acceleration\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn119_P_PI_Switching_Level_for_Acceleration0x31DB;
/** @}*/



/******************************************************************************
*                    Object 0x31DC : Axis0_Pn120_P_PI_Switching_Level_for_Speed_Reference
******************************************************************************/
/**
* \addtogroup 0x31DC 0x31DC | Axis0_Pn120_P_PI_Switching_Level_for_Speed_Reference
* @{
* \brief Object 0x31DC (Axis0_Pn120_P_PI_Switching_Level_for_Speed_Reference) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31DC = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31DC[] = "Axis0_Pn120_P_PI_Switching_Level_for_Speed_Reference\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn120_P_PI_Switching_Level_for_Speed_Reference0x31DC;
/** @}*/



/******************************************************************************
*                    Object 0x31DD : Axis0_Pn121_Gain_Switching_Conditions
******************************************************************************/
/**
* \addtogroup 0x31DD 0x31DD | Axis0_Pn121_Gain_Switching_Conditions
* @{
* \brief Object 0x31DD (Axis0_Pn121_Gain_Switching_Conditions) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31DD = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31DD[] = "Axis0_Pn121_Gain_Switching_Conditions\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn121_Gain_Switching_Conditions0x31DD;
/** @}*/



/******************************************************************************
*                    Object 0x31DE : Axis0_Pn122_Gain_Switching_Waiting_Time
******************************************************************************/
/**
* \addtogroup 0x31DE 0x31DE | Axis0_Pn122_Gain_Switching_Waiting_Time
* @{
* \brief Object 0x31DE (Axis0_Pn122_Gain_Switching_Waiting_Time) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31DE = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31DE[] = "Axis0_Pn122_Gain_Switching_Waiting_Time\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn122_Gain_Switching_Waiting_Time0x31DE;
/** @}*/



/******************************************************************************
*                    Object 0x31DF : Axis0_Pn123_Gain_Switching_Level
******************************************************************************/
/**
* \addtogroup 0x31DF 0x31DF | Axis0_Pn123_Gain_Switching_Level
* @{
* \brief Object 0x31DF (Axis0_Pn123_Gain_Switching_Level) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31DF = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31DF[] = "Axis0_Pn123_Gain_Switching_Level\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn123_Gain_Switching_Level0x31DF;
/** @}*/



/******************************************************************************
*                    Object 0x31E0 : Axis0_Pn124_Speed_Level
******************************************************************************/
/**
* \addtogroup 0x31E0 0x31E0 | Axis0_Pn124_Speed_Level
* @{
* \brief Object 0x31E0 (Axis0_Pn124_Speed_Level) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31E0 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31E0[] = "Axis0_Pn124_Speed_Level\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn124_Speed_Level0x31E0;
/** @}*/



/******************************************************************************
*                    Object 0x31E1 : Axis0_Pn125_Position_Gain_Switching_Time
******************************************************************************/
/**
* \addtogroup 0x31E1 0x31E1 | Axis0_Pn125_Position_Gain_Switching_Time
* @{
* \brief Object 0x31E1 (Axis0_Pn125_Position_Gain_Switching_Time) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31E1 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31E1[] = "Axis0_Pn125_Position_Gain_Switching_Time\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn125_Position_Gain_Switching_Time0x31E1;
/** @}*/



/******************************************************************************
*                    Object 0x31E2 : Axis0_Pn126_Gain_Switching_Hysteresis
******************************************************************************/
/**
* \addtogroup 0x31E2 0x31E2 | Axis0_Pn126_Gain_Switching_Hysteresis
* @{
* \brief Object 0x31E2 (Axis0_Pn126_Gain_Switching_Hysteresis) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31E2 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31E2[] = "Axis0_Pn126_Gain_Switching_Hysteresis\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn126_Gain_Switching_Hysteresis0x31E2;
/** @}*/



/******************************************************************************
*                    Object 0x31E3 : Axis0_Pn127_Speed_Measurement_Filter_at_Low_Speed
******************************************************************************/
/**
* \addtogroup 0x31E3 0x31E3 | Axis0_Pn127_Speed_Measurement_Filter_at_Low_Speed
* @{
* \brief Object 0x31E3 (Axis0_Pn127_Speed_Measurement_Filter_at_Low_Speed) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31E3 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31E3[] = "Axis0_Pn127_Speed_Measurement_Filter_at_Low_Speed\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn127_Speed_Measurement_Filter_at_Low_Speed0x31E3;
/** @}*/



/******************************************************************************
*                    Object 0x31E6 : Axis0_Pn130_Friction_Compensation_Gain
******************************************************************************/
/**
* \addtogroup 0x31E6 0x31E6 | Axis0_Pn130_Friction_Compensation_Gain
* @{
* \brief Object 0x31E6 (Axis0_Pn130_Friction_Compensation_Gain) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31E6 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31E6[] = "Axis0_Pn130_Friction_Compensation_Gain\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn130_Friction_Compensation_Gain0x31E6;
/** @}*/



/******************************************************************************
*                    Object 0x31E7 : Axis0_Pn131_Friction_Compensation_Speed_Hysteresis
******************************************************************************/
/**
* \addtogroup 0x31E7 0x31E7 | Axis0_Pn131_Friction_Compensation_Speed_Hysteresis
* @{
* \brief Object 0x31E7 (Axis0_Pn131_Friction_Compensation_Speed_Hysteresis) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31E7 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31E7[] = "Axis0_Pn131_Friction_Compensation_Speed_Hysteresis\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn131_Friction_Compensation_Speed_Hysteresis0x31E7;
/** @}*/



/******************************************************************************
*                    Object 0x31E8 : Axis0_Pn132_Friction_Damping_Proportion
******************************************************************************/
/**
* \addtogroup 0x31E8 0x31E8 | Axis0_Pn132_Friction_Damping_Proportion
* @{
* \brief Object 0x31E8 (Axis0_Pn132_Friction_Damping_Proportion) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31E8 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31E8[] = "Axis0_Pn132_Friction_Damping_Proportion\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn132_Friction_Damping_Proportion0x31E8;
/** @}*/



/******************************************************************************
*                    Object 0x31EB : Axis0_Pn135_Speed_Feedback_Filter_Time
******************************************************************************/
/**
* \addtogroup 0x31EB 0x31EB | Axis0_Pn135_Speed_Feedback_Filter_Time
* @{
* \brief Object 0x31EB (Axis0_Pn135_Speed_Feedback_Filter_Time) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31EB = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31EB[] = "Axis0_Pn135_Speed_Feedback_Filter_Time\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn135_Speed_Feedback_Filter_Time0x31EB;
/** @}*/



/******************************************************************************
*                    Object 0x31FA : Axis0_Pn150_Control_Related_Selections
******************************************************************************/
/**
* \addtogroup 0x31FA 0x31FA | Axis0_Pn150_Control_Related_Selections
* @{
* \brief Object 0x31FA (Axis0_Pn150_Control_Related_Selections) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31FA = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31FA[] = "Axis0_Pn150_Control_Related_Selections\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn150_Control_Related_Selections0x31FA;
/** @}*/



/******************************************************************************
*                    Object 0x31FB : Axis0_Pn151_Model_Following_Control_Gain
******************************************************************************/
/**
* \addtogroup 0x31FB 0x31FB | Axis0_Pn151_Model_Following_Control_Gain
* @{
* \brief Object 0x31FB (Axis0_Pn151_Model_Following_Control_Gain) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31FB = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31FB[] = "Axis0_Pn151_Model_Following_Control_Gain\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn151_Model_Following_Control_Gain0x31FB;
/** @}*/



/******************************************************************************
*                    Object 0x31FC : Axis0_Pn152_Model_Following_Control_Gain_Correction
******************************************************************************/
/**
* \addtogroup 0x31FC 0x31FC | Axis0_Pn152_Model_Following_Control_Gain_Correction
* @{
* \brief Object 0x31FC (Axis0_Pn152_Model_Following_Control_Gain_Correction) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31FC = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31FC[] = "Axis0_Pn152_Model_Following_Control_Gain_Correction\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn152_Model_Following_Control_Gain_Correction0x31FC;
/** @}*/



/******************************************************************************
*                    Object 0x31FD : Axis0_Pn153_Model_Following_Control_Speed_Feedforward_Coefficient
******************************************************************************/
/**
* \addtogroup 0x31FD 0x31FD | Axis0_Pn153_Model_Following_Control_Speed_Feedforward_Coefficient
* @{
* \brief Object 0x31FD (Axis0_Pn153_Model_Following_Control_Speed_Feedforward_Coefficient) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31FD = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31FD[] = "Axis0_Pn153_Model_Following_Control_Speed_Feedforward_Coefficient\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn153_Model_Following_Control_Speed_Feedforward_Coefficient0x31FD;
/** @}*/



/******************************************************************************
*                    Object 0x31FE : Axis0_Pn154_Model_Following_Control_Torque_Feedforward_Coefficient
******************************************************************************/
/**
* \addtogroup 0x31FE 0x31FE | Axis0_Pn154_Model_Following_Control_Torque_Feedforward_Coefficient
* @{
* \brief Object 0x31FE (Axis0_Pn154_Model_Following_Control_Torque_Feedforward_Coefficient) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31FE = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31FE[] = "Axis0_Pn154_Model_Following_Control_Torque_Feedforward_Coefficient\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn154_Model_Following_Control_Torque_Feedforward_Coefficient0x31FE;
/** @}*/



/******************************************************************************
*                    Object 0x31FF : Axis0_Pn155_Anti_Resonance_Frequency_for_Jitter_Suppression
******************************************************************************/
/**
* \addtogroup 0x31FF 0x31FF | Axis0_Pn155_Anti_Resonance_Frequency_for_Jitter_Suppression
* @{
* \brief Object 0x31FF (Axis0_Pn155_Anti_Resonance_Frequency_for_Jitter_Suppression) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x31FF = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x31FF[] = "Axis0_Pn155_Anti_Resonance_Frequency_for_Jitter_Suppression\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn155_Anti_Resonance_Frequency_for_Jitter_Suppression0x31FF;
/** @}*/



/******************************************************************************
*                    Object 0x3200 : Axis0_Pn156_Filter_Time_Constant_for_Jitter_Suppression
******************************************************************************/
/**
* \addtogroup 0x3200 0x3200 | Axis0_Pn156_Filter_Time_Constant_for_Jitter_Suppression
* @{
* \brief Object 0x3200 (Axis0_Pn156_Filter_Time_Constant_for_Jitter_Suppression) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3200 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3200[] = "Axis0_Pn156_Filter_Time_Constant_for_Jitter_Suppression\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn156_Filter_Time_Constant_for_Jitter_Suppression0x3200;
/** @}*/



/******************************************************************************
*                    Object 0x3201 : Axis0_Pn157_Low_frequency_jitter_suppression_speed_feedforward_compensation_amount_limiting
******************************************************************************/
/**
* \addtogroup 0x3201 0x3201 | Axis0_Pn157_Low_frequency_jitter_suppression_speed_feedforward_compensation_amount_limiting
* @{
* \brief Object 0x3201 (Axis0_Pn157_Low_frequency_jitter_suppression_speed_feedforward_compensation_amount_limiting) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3201 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3201[] = "Axis0_Pn157_Low_frequency_jitter_suppression_speed_feedforward_compensation_amount_limiting\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn157_Low_frequency_jitter_suppression_speed_feedforward_compensation_amount_limiting0x3201;
/** @}*/



/******************************************************************************
*                    Object 0x3204 : Axis0_Pn160_Load_Disturbance_Compensation
******************************************************************************/
/**
* \addtogroup 0x3204 0x3204 | Axis0_Pn160_Load_Disturbance_Compensation
* @{
* \brief Object 0x3204 (Axis0_Pn160_Load_Disturbance_Compensation) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3204 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3204[] = "Axis0_Pn160_Load_Disturbance_Compensation\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn160_Load_Disturbance_Compensation0x3204;
/** @}*/



/******************************************************************************
*                    Object 0x3205 : Axis0_Pn161_Load_Disturbance_Detection_Gain
******************************************************************************/
/**
* \addtogroup 0x3205 0x3205 | Axis0_Pn161_Load_Disturbance_Detection_Gain
* @{
* \brief Object 0x3205 (Axis0_Pn161_Load_Disturbance_Detection_Gain) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3205 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3205[] = "Axis0_Pn161_Load_Disturbance_Detection_Gain\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn161_Load_Disturbance_Detection_Gain0x3205;
/** @}*/



/******************************************************************************
*                    Object 0x3208 : Axis0_Pn164_PJOG0_Rotation_Number
******************************************************************************/
/**
* \addtogroup 0x3208 0x3208 | Axis0_Pn164_PJOG0_Rotation_Number
* @{
* \brief Object 0x3208 (Axis0_Pn164_PJOG0_Rotation_Number) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3208 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3208[] = "Axis0_Pn164_PJOG0_Rotation_Number\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn164_PJOG0_Rotation_Number0x3208;
/** @}*/



/******************************************************************************
*                    Object 0x3209 : Axis0_Pn165_PJOG0_Rotation_Speed
******************************************************************************/
/**
* \addtogroup 0x3209 0x3209 | Axis0_Pn165_PJOG0_Rotation_Speed
* @{
* \brief Object 0x3209 (Axis0_Pn165_PJOG0_Rotation_Speed) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3209 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3209[] = "Axis0_Pn165_PJOG0_Rotation_Speed\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn165_PJOG0_Rotation_Speed0x3209;
/** @}*/



/******************************************************************************
*                    Object 0x320A : Axis0_Pn166_PJOG0_Acceleration_Deceleration_Time
******************************************************************************/
/**
* \addtogroup 0x320A 0x320A | Axis0_Pn166_PJOG0_Acceleration_Deceleration_Time
* @{
* \brief Object 0x320A (Axis0_Pn166_PJOG0_Acceleration_Deceleration_Time) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x320A = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x320A[] = "Axis0_Pn166_PJOG0_Acceleration_Deceleration_Time\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn166_PJOG0_Acceleration_Deceleration_Time0x320A;
/** @}*/



/******************************************************************************
*                    Object 0x320B : Axis0_Pn167_PJOG0_Stop_Time
******************************************************************************/
/**
* \addtogroup 0x320B 0x320B | Axis0_Pn167_PJOG0_Stop_Time
* @{
* \brief Object 0x320B (Axis0_Pn167_PJOG0_Stop_Time) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x320B = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x320B[] = "Axis0_Pn167_PJOG0_Stop_Time\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn167_PJOG0_Stop_Time0x320B;
/** @}*/



/******************************************************************************
*                    Object 0x320C : Axis0_Pn168_PJOG1_Rotation_Number
******************************************************************************/
/**
* \addtogroup 0x320C 0x320C | Axis0_Pn168_PJOG1_Rotation_Number
* @{
* \brief Object 0x320C (Axis0_Pn168_PJOG1_Rotation_Number) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x320C = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x320C[] = "Axis0_Pn168_PJOG1_Rotation_Number\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn168_PJOG1_Rotation_Number0x320C;
/** @}*/



/******************************************************************************
*                    Object 0x320D : Axis0_Pn169_PJOG1_Rotation_Speed
******************************************************************************/
/**
* \addtogroup 0x320D 0x320D | Axis0_Pn169_PJOG1_Rotation_Speed
* @{
* \brief Object 0x320D (Axis0_Pn169_PJOG1_Rotation_Speed) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x320D = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x320D[] = "Axis0_Pn169_PJOG1_Rotation_Speed\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn169_PJOG1_Rotation_Speed0x320D;
/** @}*/



/******************************************************************************
*                    Object 0x320E : Axis0_Pn170_PJOG1_Acceleration_Deceleration_Time
******************************************************************************/
/**
* \addtogroup 0x320E 0x320E | Axis0_Pn170_PJOG1_Acceleration_Deceleration_Time
* @{
* \brief Object 0x320E (Axis0_Pn170_PJOG1_Acceleration_Deceleration_Time) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x320E = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x320E[] = "Axis0_Pn170_PJOG1_Acceleration_Deceleration_Time\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn170_PJOG1_Acceleration_Deceleration_Time0x320E;
/** @}*/



/******************************************************************************
*                    Object 0x320F : Axis0_Pn171_PJOG1_Stop_Time
******************************************************************************/
/**
* \addtogroup 0x320F 0x320F | Axis0_Pn171_PJOG1_Stop_Time
* @{
* \brief Object 0x320F (Axis0_Pn171_PJOG1_Stop_Time) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x320F = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x320F[] = "Axis0_Pn171_PJOG1_Stop_Time\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn171_PJOG1_Stop_Time0x320F;
/** @}*/



/******************************************************************************
*                    Object 0x3210 : Axis0_Pn172_Moment_of_Inertia_Calculation_Amount
******************************************************************************/
/**
* \addtogroup 0x3210 0x3210 | Axis0_Pn172_Moment_of_Inertia_Calculation_Amount
* @{
* \brief Object 0x3210 (Axis0_Pn172_Moment_of_Inertia_Calculation_Amount) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3210 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3210[] = "Axis0_Pn172_Moment_of_Inertia_Calculation_Amount\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn172_Moment_of_Inertia_Calculation_Amount0x3210;
/** @}*/



/******************************************************************************
*                    Object 0x3211 : Axis0_Pn173_Vibration_Suppression_Frequency_at_Intermediate_Frequency
******************************************************************************/
/**
* \addtogroup 0x3211 0x3211 | Axis0_Pn173_Vibration_Suppression_Frequency_at_Intermediate_Frequency
* @{
* \brief Object 0x3211 (Axis0_Pn173_Vibration_Suppression_Frequency_at_Intermediate_Frequency) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3211 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3211[] = "Axis0_Pn173_Vibration_Suppression_Frequency_at_Intermediate_Frequency\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn173_Vibration_Suppression_Frequency_at_Intermediate_Frequency0x3211;
/** @}*/



/******************************************************************************
*                    Object 0x3212 : Axis0_Pn174_Vibration_Suppression_Bandwidth_Adjustment_at_Intermediate_Frequency
******************************************************************************/
/**
* \addtogroup 0x3212 0x3212 | Axis0_Pn174_Vibration_Suppression_Bandwidth_Adjustment_at_Intermediate_Frequency
* @{
* \brief Object 0x3212 (Axis0_Pn174_Vibration_Suppression_Bandwidth_Adjustment_at_Intermediate_Frequency) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3212 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3212[] = "Axis0_Pn174_Vibration_Suppression_Bandwidth_Adjustment_at_Intermediate_Frequency\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn174_Vibration_Suppression_Bandwidth_Adjustment_at_Intermediate_Frequency0x3212;
/** @}*/



/******************************************************************************
*                    Object 0x3213 : Axis0_Pn175_Vibration_Suppression_Damping_Gain_at_Intermediate_Frequency
******************************************************************************/
/**
* \addtogroup 0x3213 0x3213 | Axis0_Pn175_Vibration_Suppression_Damping_Gain_at_Intermediate_Frequency
* @{
* \brief Object 0x3213 (Axis0_Pn175_Vibration_Suppression_Damping_Gain_at_Intermediate_Frequency) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3213 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3213[] = "Axis0_Pn175_Vibration_Suppression_Damping_Gain_at_Intermediate_Frequency\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn175_Vibration_Suppression_Damping_Gain_at_Intermediate_Frequency0x3213;
/** @}*/



/******************************************************************************
*                    Object 0x3214 : Axis0_Pn176_Vibration_Suppression_Lowpass_Filter_Time_at_Intermediate_Frequency
******************************************************************************/
/**
* \addtogroup 0x3214 0x3214 | Axis0_Pn176_Vibration_Suppression_Lowpass_Filter_Time_at_Intermediate_Frequency
* @{
* \brief Object 0x3214 (Axis0_Pn176_Vibration_Suppression_Lowpass_Filter_Time_at_Intermediate_Frequency) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3214 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3214[] = "Axis0_Pn176_Vibration_Suppression_Lowpass_Filter_Time_at_Intermediate_Frequency\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn176_Vibration_Suppression_Lowpass_Filter_Time_at_Intermediate_Frequency0x3214;
/** @}*/



/******************************************************************************
*                    Object 0x3215 : Axis0_Pn177_Vibration_Suppression_Highpass_Filter_Time_at_Intermediate_Frequency
******************************************************************************/
/**
* \addtogroup 0x3215 0x3215 | Axis0_Pn177_Vibration_Suppression_Highpass_Filter_Time_at_Intermediate_Frequency
* @{
* \brief Object 0x3215 (Axis0_Pn177_Vibration_Suppression_Highpass_Filter_Time_at_Intermediate_Frequency) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3215 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3215[] = "Axis0_Pn177_Vibration_Suppression_Highpass_Filter_Time_at_Intermediate_Frequency\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn177_Vibration_Suppression_Highpass_Filter_Time_at_Intermediate_Frequency0x3215;
/** @}*/



/******************************************************************************
*                    Object 0x3216 : Axis0_Pn178_Vibration_Suppression_Proportional_Attenuation_Gain_at_Intermediate_Frequency
******************************************************************************/
/**
* \addtogroup 0x3216 0x3216 | Axis0_Pn178_Vibration_Suppression_Proportional_Attenuation_Gain_at_Intermediate_Frequency
* @{
* \brief Object 0x3216 (Axis0_Pn178_Vibration_Suppression_Proportional_Attenuation_Gain_at_Intermediate_Frequency) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3216 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3216[] = "Axis0_Pn178_Vibration_Suppression_Proportional_Attenuation_Gain_at_Intermediate_Frequency\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn178_Vibration_Suppression_Proportional_Attenuation_Gain_at_Intermediate_Frequency0x3216;
/** @}*/



/******************************************************************************
*                    Object 0x3217 : Axis0_Pn179_Vibration_Amplitude_Detection_Level
******************************************************************************/
/**
* \addtogroup 0x3217 0x3217 | Axis0_Pn179_Vibration_Amplitude_Detection_Level
* @{
* \brief Object 0x3217 (Axis0_Pn179_Vibration_Amplitude_Detection_Level) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3217 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3217[] = "Axis0_Pn179_Vibration_Amplitude_Detection_Level\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn179_Vibration_Amplitude_Detection_Level0x3217;
/** @}*/



/******************************************************************************
*                    Object 0x3218 : Axis0_Pn180_Vibration_Frequency_Detection_Level
******************************************************************************/
/**
* \addtogroup 0x3218 0x3218 | Axis0_Pn180_Vibration_Frequency_Detection_Level
* @{
* \brief Object 0x3218 (Axis0_Pn180_Vibration_Frequency_Detection_Level) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3218 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3218[] = "Axis0_Pn180_Vibration_Frequency_Detection_Level\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn180_Vibration_Frequency_Detection_Level0x3218;
/** @}*/



/******************************************************************************
*                    Object 0x3219 : Axis0_Pn181_Notch_Filter_Frequency_1
******************************************************************************/
/**
* \addtogroup 0x3219 0x3219 | Axis0_Pn181_Notch_Filter_Frequency_1
* @{
* \brief Object 0x3219 (Axis0_Pn181_Notch_Filter_Frequency_1) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3219 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3219[] = "Axis0_Pn181_Notch_Filter_Frequency_1\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn181_Notch_Filter_Frequency_10x3219;
/** @}*/



/******************************************************************************
*                    Object 0x321A : Axis0_Pn182_Notch_Filter_Depth_1
******************************************************************************/
/**
* \addtogroup 0x321A 0x321A | Axis0_Pn182_Notch_Filter_Depth_1
* @{
* \brief Object 0x321A (Axis0_Pn182_Notch_Filter_Depth_1) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x321A = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x321A[] = "Axis0_Pn182_Notch_Filter_Depth_1\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn182_Notch_Filter_Depth_10x321A;
/** @}*/



/******************************************************************************
*                    Object 0x321B : Axis0_Pn183_Notch_Filter_Width_1
******************************************************************************/
/**
* \addtogroup 0x321B 0x321B | Axis0_Pn183_Notch_Filter_Width_1
* @{
* \brief Object 0x321B (Axis0_Pn183_Notch_Filter_Width_1) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x321B = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x321B[] = "Axis0_Pn183_Notch_Filter_Width_1\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn183_Notch_Filter_Width_10x321B;
/** @}*/



/******************************************************************************
*                    Object 0x321C : Axis0_Pn184_Notch_Filter_Frequency_2
******************************************************************************/
/**
* \addtogroup 0x321C 0x321C | Axis0_Pn184_Notch_Filter_Frequency_2
* @{
* \brief Object 0x321C (Axis0_Pn184_Notch_Filter_Frequency_2) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x321C = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x321C[] = "Axis0_Pn184_Notch_Filter_Frequency_2\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn184_Notch_Filter_Frequency_20x321C;
/** @}*/



/******************************************************************************
*                    Object 0x321D : Axis0_Pn185_Notch_Filter_Depth_2
******************************************************************************/
/**
* \addtogroup 0x321D 0x321D | Axis0_Pn185_Notch_Filter_Depth_2
* @{
* \brief Object 0x321D (Axis0_Pn185_Notch_Filter_Depth_2) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x321D = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x321D[] = "Axis0_Pn185_Notch_Filter_Depth_2\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn185_Notch_Filter_Depth_20x321D;
/** @}*/



/******************************************************************************
*                    Object 0x321E : Axis0_Pn186_Notch_Filter_Width_2
******************************************************************************/
/**
* \addtogroup 0x321E 0x321E | Axis0_Pn186_Notch_Filter_Width_2
* @{
* \brief Object 0x321E (Axis0_Pn186_Notch_Filter_Width_2) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x321E = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x321E[] = "Axis0_Pn186_Notch_Filter_Width_2\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn186_Notch_Filter_Width_20x321E;
/** @}*/



/******************************************************************************
*                    Object 0x321F : Axis0_Pn187_Notch_Filter_Frequency_3
******************************************************************************/
/**
* \addtogroup 0x321F 0x321F | Axis0_Pn187_Notch_Filter_Frequency_3
* @{
* \brief Object 0x321F (Axis0_Pn187_Notch_Filter_Frequency_3) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x321F = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x321F[] = "Axis0_Pn187_Notch_Filter_Frequency_3\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn187_Notch_Filter_Frequency_30x321F;
/** @}*/



/******************************************************************************
*                    Object 0x3220 : Axis0_Pn188_Notch_Filter_Depth_3
******************************************************************************/
/**
* \addtogroup 0x3220 0x3220 | Axis0_Pn188_Notch_Filter_Depth_3
* @{
* \brief Object 0x3220 (Axis0_Pn188_Notch_Filter_Depth_3) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3220 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3220[] = "Axis0_Pn188_Notch_Filter_Depth_3\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn188_Notch_Filter_Depth_30x3220;
/** @}*/



/******************************************************************************
*                    Object 0x3221 : Axis0_Pn189_Notch_Filter_Width_3
******************************************************************************/
/**
* \addtogroup 0x3221 0x3221 | Axis0_Pn189_Notch_Filter_Width_3
* @{
* \brief Object 0x3221 (Axis0_Pn189_Notch_Filter_Width_3) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3221 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3221[] = "Axis0_Pn189_Notch_Filter_Width_3\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn189_Notch_Filter_Width_30x3221;
/** @}*/



/******************************************************************************
*                    Object 0x3222 : Axis0_Pn190_Automatic_Vibration_Suppression_State
******************************************************************************/
/**
* \addtogroup 0x3222 0x3222 | Axis0_Pn190_Automatic_Vibration_Suppression_State
* @{
* \brief Object 0x3222 (Axis0_Pn190_Automatic_Vibration_Suppression_State) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3222 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3222[] = "Axis0_Pn190_Automatic_Vibration_Suppression_State\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn190_Automatic_Vibration_Suppression_State0x3222;
/** @}*/



/******************************************************************************
*                    Object 0x3223 : Axis0_Pn191_Vibration_Frequency_Detection_Level
******************************************************************************/
/**
* \addtogroup 0x3223 0x3223 | Axis0_Pn191_Vibration_Frequency_Detection_Level
* @{
* \brief Object 0x3223 (Axis0_Pn191_Vibration_Frequency_Detection_Level) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3223 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3223[] = "Axis0_Pn191_Vibration_Frequency_Detection_Level\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn191_Vibration_Frequency_Detection_Level0x3223;
/** @}*/



/******************************************************************************
*                    Object 0x322C : Axis0_Pn200_Pulse_Numbers_for_PG_Frequency_Division
******************************************************************************/
/**
* \addtogroup 0x322C 0x322C | Axis0_Pn200_Pulse_Numbers_for_PG_Frequency_Division
* @{
* \brief Object 0x322C (Axis0_Pn200_Pulse_Numbers_for_PG_Frequency_Division) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x322C = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x322C[] = "Axis0_Pn200_Pulse_Numbers_for_PG_Frequency_Division\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn200_Pulse_Numbers_for_PG_Frequency_Division0x322C;
/** @}*/



/******************************************************************************
*                    Object 0x3236 : Axis0_Pn210_2nd_Encoder_Functions_1
******************************************************************************/
/**
* \addtogroup 0x3236 0x3236 | Axis0_Pn210_2nd_Encoder_Functions_1
* @{
* \brief Object 0x3236 (Axis0_Pn210_2nd_Encoder_Functions_1) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3236 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3236[] = "Axis0_Pn210_2nd_Encoder_Functions_1\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn210_2nd_Encoder_Functions_10x3236;
/** @}*/



/******************************************************************************
*                    Object 0x3237 : Axis0_Pn211_2nd_Encoder_Functions_2
******************************************************************************/
/**
* \addtogroup 0x3237 0x3237 | Axis0_Pn211_2nd_Encoder_Functions_2
* @{
* \brief Object 0x3237 (Axis0_Pn211_2nd_Encoder_Functions_2) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3237 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3237[] = "Axis0_Pn211_2nd_Encoder_Functions_2\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn211_2nd_Encoder_Functions_20x3237;
/** @}*/



/******************************************************************************
*                    Object 0x3238 : Axis0_Pn212_2nd_Encoder_Resolution
******************************************************************************/
/**
* \addtogroup 0x3238 0x3238 | Axis0_Pn212_2nd_Encoder_Resolution
* @{
* \brief Object 0x3238 (Axis0_Pn212_2nd_Encoder_Resolution) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3238 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3238[] = "Axis0_Pn212_2nd_Encoder_Resolution\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn212_2nd_Encoder_Resolution0x3238;
/** @}*/



/******************************************************************************
*                    Object 0x3239 : Axis0_Pn213_Position_Deviation_Overflow_Warning_Level_at_Fully_Closed_loop_Control
******************************************************************************/
/**
* \addtogroup 0x3239 0x3239 | Axis0_Pn213_Position_Deviation_Overflow_Warning_Level_at_Fully_Closed_loop_Control
* @{
* \brief Object 0x3239 (Axis0_Pn213_Position_Deviation_Overflow_Warning_Level_at_Fully_Closed_loop_Control) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3239 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3239[] = "Axis0_Pn213_Position_Deviation_Overflow_Warning_Level_at_Fully_Closed_loop_Control\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn213_Position_Deviation_Overflow_Warning_Level_at_Fully_Closed_loop_Control0x3239;
/** @}*/



/******************************************************************************
*                    Object 0x323A : Axis0_Pn214_Position_Deviation_Reset_Level_at_Fully_Closed_loop_Control
******************************************************************************/
/**
* \addtogroup 0x323A 0x323A | Axis0_Pn214_Position_Deviation_Reset_Level_at_Fully_Closed_loop_Control
* @{
* \brief Object 0x323A (Axis0_Pn214_Position_Deviation_Reset_Level_at_Fully_Closed_loop_Control) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x323A = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x323A[] = "Axis0_Pn214_Position_Deviation_Reset_Level_at_Fully_Closed_loop_Control\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn214_Position_Deviation_Reset_Level_at_Fully_Closed_loop_Control0x323A;
/** @}*/



/******************************************************************************
*                    Object 0x3245 : Axis0_Pn225_Encoder_delay_compensation_mode
******************************************************************************/
/**
* \addtogroup 0x3245 0x3245 | Axis0_Pn225_Encoder_delay_compensation_mode
* @{
* \brief Object 0x3245 (Axis0_Pn225_Encoder_delay_compensation_mode) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3245 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3245[] = "Axis0_Pn225_Encoder_delay_compensation_mode\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn225_Encoder_delay_compensation_mode0x3245;
/** @}*/



/******************************************************************************
*                    Object 0x3246 : Axis0_Pn226_Encoder_delay_manual_compensation_value
******************************************************************************/
/**
* \addtogroup 0x3246 0x3246 | Axis0_Pn226_Encoder_delay_manual_compensation_value
* @{
* \brief Object 0x3246 (Axis0_Pn226_Encoder_delay_manual_compensation_value) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3246 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3246[] = "Axis0_Pn226_Encoder_delay_manual_compensation_value\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn226_Encoder_delay_manual_compensation_value0x3246;
/** @}*/



/******************************************************************************
*                    Object 0x3247 : Axis0_Pn227_User_Define_Multi_rotate_Function_Switch
******************************************************************************/
/**
* \addtogroup 0x3247 0x3247 | Axis0_Pn227_User_Define_Multi_rotate_Function_Switch
* @{
* \brief Object 0x3247 (Axis0_Pn227_User_Define_Multi_rotate_Function_Switch) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3247 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3247[] = "Axis0_Pn227_User_Define_Multi_rotate_Function_Switch\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn227_User_Define_Multi_rotate_Function_Switch0x3247;
/** @}*/



/******************************************************************************
*                    Object 0x3248 : Axis0_Pn228_User_Defined_Multi_Resolution
******************************************************************************/
/**
* \addtogroup 0x3248 0x3248 | Axis0_Pn228_User_Defined_Multi_Resolution
* @{
* \brief Object 0x3248 (Axis0_Pn228_User_Defined_Multi_Resolution) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3248 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3248[] = "Axis0_Pn228_User_Defined_Multi_Resolution\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn228_User_Defined_Multi_Resolution0x3248;
/** @}*/



/******************************************************************************
*                    Object 0x3294 : Axis0_Pn304_Parameter_Reference_Speed
******************************************************************************/
/**
* \addtogroup 0x3294 0x3294 | Axis0_Pn304_Parameter_Reference_Speed
* @{
* \brief Object 0x3294 (Axis0_Pn304_Parameter_Reference_Speed) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3294 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3294[] = "Axis0_Pn304_Parameter_Reference_Speed\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn304_Parameter_Reference_Speed0x3294;
/** @}*/



/******************************************************************************
*                    Object 0x3295 : Axis0_Pn305_JOG_Speed
******************************************************************************/
/**
* \addtogroup 0x3295 0x3295 | Axis0_Pn305_JOG_Speed
* @{
* \brief Object 0x3295 (Axis0_Pn305_JOG_Speed) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3295 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3295[] = "Axis0_Pn305_JOG_Speed\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn305_JOG_Speed0x3295;
/** @}*/



/******************************************************************************
*                    Object 0x3296 : Axis0_Pn306_Soft_Start_Acceleration_Time
******************************************************************************/
/**
* \addtogroup 0x3296 0x3296 | Axis0_Pn306_Soft_Start_Acceleration_Time
* @{
* \brief Object 0x3296 (Axis0_Pn306_Soft_Start_Acceleration_Time) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3296 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3296[] = "Axis0_Pn306_Soft_Start_Acceleration_Time\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn306_Soft_Start_Acceleration_Time0x3296;
/** @}*/



/******************************************************************************
*                    Object 0x3297 : Axis0_Pn307_Soft_Start_Deceleration_Time
******************************************************************************/
/**
* \addtogroup 0x3297 0x3297 | Axis0_Pn307_Soft_Start_Deceleration_Time
* @{
* \brief Object 0x3297 (Axis0_Pn307_Soft_Start_Deceleration_Time) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3297 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3297[] = "Axis0_Pn307_Soft_Start_Deceleration_Time\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn307_Soft_Start_Deceleration_Time0x3297;
/** @}*/



/******************************************************************************
*                    Object 0x3298 : Axis0_Pn308_Speed_Feedback_Filter_Time_Constant
******************************************************************************/
/**
* \addtogroup 0x3298 0x3298 | Axis0_Pn308_Speed_Feedback_Filter_Time_Constant
* @{
* \brief Object 0x3298 (Axis0_Pn308_Speed_Feedback_Filter_Time_Constant) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3298 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3298[] = "Axis0_Pn308_Speed_Feedback_Filter_Time_Constant\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn308_Speed_Feedback_Filter_Time_Constant0x3298;
/** @}*/



/******************************************************************************
*                    Object 0x3299 : Axis0_Pn309_S_Curve_Rise_Time
******************************************************************************/
/**
* \addtogroup 0x3299 0x3299 | Axis0_Pn309_S_Curve_Rise_Time
* @{
* \brief Object 0x3299 (Axis0_Pn309_S_Curve_Rise_Time) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3299 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3299[] = "Axis0_Pn309_S_Curve_Rise_Time\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn309_S_Curve_Rise_Time0x3299;
/** @}*/



/******************************************************************************
*                    Object 0x329A : Axis0_Pn310_Speed_Reference_Curve_Form
******************************************************************************/
/**
* \addtogroup 0x329A 0x329A | Axis0_Pn310_Speed_Reference_Curve_Form
* @{
* \brief Object 0x329A (Axis0_Pn310_Speed_Reference_Curve_Form) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x329A = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x329A[] = "Axis0_Pn310_Speed_Reference_Curve_Form\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn310_Speed_Reference_Curve_Form0x329A;
/** @}*/



/******************************************************************************
*                    Object 0x329B : Axis0_Pn311_S_Curve_Selection
******************************************************************************/
/**
* \addtogroup 0x329B 0x329B | Axis0_Pn311_S_Curve_Selection
* @{
* \brief Object 0x329B (Axis0_Pn311_S_Curve_Selection) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x329B = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x329B[] = "Axis0_Pn311_S_Curve_Selection\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn311_S_Curve_Selection0x329B;
/** @}*/



/******************************************************************************
*                    Object 0x32A7 : Axis0_Pn323_Overspeed_Detection_Level
******************************************************************************/
/**
* \addtogroup 0x32A7 0x32A7 | Axis0_Pn323_Overspeed_Detection_Level
* @{
* \brief Object 0x32A7 (Axis0_Pn323_Overspeed_Detection_Level) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x32A7 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x32A7[] = "Axis0_Pn323_Overspeed_Detection_Level\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn323_Overspeed_Detection_Level0x32A7;
/** @}*/



/******************************************************************************
*                    Object 0x32AF : Axis0_Pn331_Touch_Probe_Signal_Allocation
******************************************************************************/
/**
* \addtogroup 0x32AF 0x32AF | Axis0_Pn331_Touch_Probe_Signal_Allocation
* @{
* \brief Object 0x32AF (Axis0_Pn331_Touch_Probe_Signal_Allocation) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x32AF = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x32AF[] = "Axis0_Pn331_Touch_Probe_Signal_Allocation\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn331_Touch_Probe_Signal_Allocation0x32AF;
/** @}*/



/******************************************************************************
*                    Object 0x32F5 : Axis0_Pn401_Forward_Internal_Torque_Limit
******************************************************************************/
/**
* \addtogroup 0x32F5 0x32F5 | Axis0_Pn401_Forward_Internal_Torque_Limit
* @{
* \brief Object 0x32F5 (Axis0_Pn401_Forward_Internal_Torque_Limit) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x32F5 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x32F5[] = "Axis0_Pn401_Forward_Internal_Torque_Limit\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn401_Forward_Internal_Torque_Limit0x32F5;
/** @}*/



/******************************************************************************
*                    Object 0x32F6 : Axis0_Pn402_Reverse_Internal_Torque_Limit
******************************************************************************/
/**
* \addtogroup 0x32F6 0x32F6 | Axis0_Pn402_Reverse_Internal_Torque_Limit
* @{
* \brief Object 0x32F6 (Axis0_Pn402_Reverse_Internal_Torque_Limit) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x32F6 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x32F6[] = "Axis0_Pn402_Reverse_Internal_Torque_Limit\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn402_Reverse_Internal_Torque_Limit0x32F6;
/** @}*/



/******************************************************************************
*                    Object 0x32F7 : Axis0_Pn403_Forward_External_Torque_Limit
******************************************************************************/
/**
* \addtogroup 0x32F7 0x32F7 | Axis0_Pn403_Forward_External_Torque_Limit
* @{
* \brief Object 0x32F7 (Axis0_Pn403_Forward_External_Torque_Limit) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x32F7 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x32F7[] = "Axis0_Pn403_Forward_External_Torque_Limit\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn403_Forward_External_Torque_Limit0x32F7;
/** @}*/



/******************************************************************************
*                    Object 0x32F8 : Axis0_Pn404_Reverse_External_Torque_Limit
******************************************************************************/
/**
* \addtogroup 0x32F8 0x32F8 | Axis0_Pn404_Reverse_External_Torque_Limit
* @{
* \brief Object 0x32F8 (Axis0_Pn404_Reverse_External_Torque_Limit) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x32F8 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x32F8[] = "Axis0_Pn404_Reverse_External_Torque_Limit\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn404_Reverse_External_Torque_Limit0x32F8;
/** @}*/



/******************************************************************************
*                    Object 0x32F9 : Axis0_Pn405_Reverse_Brake_Torque_Limit
******************************************************************************/
/**
* \addtogroup 0x32F9 0x32F9 | Axis0_Pn405_Reverse_Brake_Torque_Limit
* @{
* \brief Object 0x32F9 (Axis0_Pn405_Reverse_Brake_Torque_Limit) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x32F9 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x32F9[] = "Axis0_Pn405_Reverse_Brake_Torque_Limit\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn405_Reverse_Brake_Torque_Limit0x32F9;
/** @}*/



/******************************************************************************
*                    Object 0x32FA : Axis0_Pn406_Torque_Limit_at_Undervoltage
******************************************************************************/
/**
* \addtogroup 0x32FA 0x32FA | Axis0_Pn406_Torque_Limit_at_Undervoltage
* @{
* \brief Object 0x32FA (Axis0_Pn406_Torque_Limit_at_Undervoltage) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x32FA = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x32FA[] = "Axis0_Pn406_Torque_Limit_at_Undervoltage\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn406_Torque_Limit_at_Undervoltage0x32FA;
/** @}*/



/******************************************************************************
*                    Object 0x32FB : Axis0_Pn407_Release_Time_for_Torque_Limit_at_Undervoltage
******************************************************************************/
/**
* \addtogroup 0x32FB 0x32FB | Axis0_Pn407_Release_Time_for_Torque_Limit_at_Undervoltage
* @{
* \brief Object 0x32FB (Axis0_Pn407_Release_Time_for_Torque_Limit_at_Undervoltage) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x32FB = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x32FB[] = "Axis0_Pn407_Release_Time_for_Torque_Limit_at_Undervoltage\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn407_Release_Time_for_Torque_Limit_at_Undervoltage0x32FB;
/** @}*/



/******************************************************************************
*                    Object 0x32FC : Axis0_Pn408_Speed_Limit_during_Torque_Control
******************************************************************************/
/**
* \addtogroup 0x32FC 0x32FC | Axis0_Pn408_Speed_Limit_during_Torque_Control
* @{
* \brief Object 0x32FC (Axis0_Pn408_Speed_Limit_during_Torque_Control) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x32FC = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x32FC[] = "Axis0_Pn408_Speed_Limit_during_Torque_Control\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn408_Speed_Limit_during_Torque_Control0x32FC;
/** @}*/



/******************************************************************************
*                    Object 0x3358 : Axis0_Pn500_Positioning_Completed_Width
******************************************************************************/
/**
* \addtogroup 0x3358 0x3358 | Axis0_Pn500_Positioning_Completed_Width
* @{
* \brief Object 0x3358 (Axis0_Pn500_Positioning_Completed_Width) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3358 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3358[] = "Axis0_Pn500_Positioning_Completed_Width\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn500_Positioning_Completed_Width0x3358;
/** @}*/



/******************************************************************************
*                    Object 0x3359 : Axis0_Pn501_Speed_Coincidence_Signal_Detection_Width
******************************************************************************/
/**
* \addtogroup 0x3359 0x3359 | Axis0_Pn501_Speed_Coincidence_Signal_Detection_Width
* @{
* \brief Object 0x3359 (Axis0_Pn501_Speed_Coincidence_Signal_Detection_Width) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3359 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3359[] = "Axis0_Pn501_Speed_Coincidence_Signal_Detection_Width\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn501_Speed_Coincidence_Signal_Detection_Width0x3359;
/** @}*/



/******************************************************************************
*                    Object 0x335B : Axis0_Pn503_Rotation_Detection_Speed
******************************************************************************/
/**
* \addtogroup 0x335B 0x335B | Axis0_Pn503_Rotation_Detection_Speed
* @{
* \brief Object 0x335B (Axis0_Pn503_Rotation_Detection_Speed) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x335B = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x335B[] = "Axis0_Pn503_Rotation_Detection_Speed\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn503_Rotation_Detection_Speed0x335B;
/** @}*/



/******************************************************************************
*                    Object 0x335C : Axis0_Pn504_Deviation_Counter_Overflow_Alarm
******************************************************************************/
/**
* \addtogroup 0x335C 0x335C | Axis0_Pn504_Deviation_Counter_Overflow_Alarm
* @{
* \brief Object 0x335C (Axis0_Pn504_Deviation_Counter_Overflow_Alarm) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x335C = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x335C[] = "Axis0_Pn504_Deviation_Counter_Overflow_Alarm\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn504_Deviation_Counter_Overflow_Alarm0x335C;
/** @}*/



/******************************************************************************
*                    Object 0x335D : Axis0_Pn505_Servo_ON_Waiting_Time
******************************************************************************/
/**
* \addtogroup 0x335D 0x335D | Axis0_Pn505_Servo_ON_Waiting_Time
* @{
* \brief Object 0x335D (Axis0_Pn505_Servo_ON_Waiting_Time) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x335D = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x335D[] = "Axis0_Pn505_Servo_ON_Waiting_Time\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn505_Servo_ON_Waiting_Time0x335D;
/** @}*/



/******************************************************************************
*                    Object 0x335E : Axis0_Pn506_Brake_Reference_Servo_OFF_Delay_Time
******************************************************************************/
/**
* \addtogroup 0x335E 0x335E | Axis0_Pn506_Brake_Reference_Servo_OFF_Delay_Time
* @{
* \brief Object 0x335E (Axis0_Pn506_Brake_Reference_Servo_OFF_Delay_Time) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x335E = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x335E[] = "Axis0_Pn506_Brake_Reference_Servo_OFF_Delay_Time\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn506_Brake_Reference_Servo_OFF_Delay_Time0x335E;
/** @}*/



/******************************************************************************
*                    Object 0x335F : Axis0_Pn507_Brake_Reference_Waiting_Speed
******************************************************************************/
/**
* \addtogroup 0x335F 0x335F | Axis0_Pn507_Brake_Reference_Waiting_Speed
* @{
* \brief Object 0x335F (Axis0_Pn507_Brake_Reference_Waiting_Speed) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x335F = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x335F[] = "Axis0_Pn507_Brake_Reference_Waiting_Speed\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn507_Brake_Reference_Waiting_Speed0x335F;
/** @}*/



/******************************************************************************
*                    Object 0x3360 : Axis0_Pn508_Brake_Reference_Waiting_Time
******************************************************************************/
/**
* \addtogroup 0x3360 0x3360 | Axis0_Pn508_Brake_Reference_Waiting_Time
* @{
* \brief Object 0x3360 (Axis0_Pn508_Brake_Reference_Waiting_Time) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3360 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3360[] = "Axis0_Pn508_Brake_Reference_Waiting_Time\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn508_Brake_Reference_Waiting_Time0x3360;
/** @}*/



/******************************************************************************
*                    Object 0x3361 : Axis0_Pn509_Input_Signal_Allocations_1
******************************************************************************/
/**
* \addtogroup 0x3361 0x3361 | Axis0_Pn509_Input_Signal_Allocations_1
* @{
* \brief Object 0x3361 (Axis0_Pn509_Input_Signal_Allocations_1) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3361 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3361[] = "Axis0_Pn509_Input_Signal_Allocations_1\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn509_Input_Signal_Allocations_10x3361;
/** @}*/



/******************************************************************************
*                    Object 0x3362 : Axis0_Pn510_Input_Signal_Allocations_2
******************************************************************************/
/**
* \addtogroup 0x3362 0x3362 | Axis0_Pn510_Input_Signal_Allocations_2
* @{
* \brief Object 0x3362 (Axis0_Pn510_Input_Signal_Allocations_2) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3362 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3362[] = "Axis0_Pn510_Input_Signal_Allocations_2\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn510_Input_Signal_Allocations_20x3362;
/** @}*/



/******************************************************************************
*                    Object 0x3363 : Axis0_Pn511_Output_Signal_Allocations
******************************************************************************/
/**
* \addtogroup 0x3363 0x3363 | Axis0_Pn511_Output_Signal_Allocations
* @{
* \brief Object 0x3363 (Axis0_Pn511_Output_Signal_Allocations) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3363 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3363[] = "Axis0_Pn511_Output_Signal_Allocations\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn511_Output_Signal_Allocations0x3363;
/** @}*/



/******************************************************************************
*                    Object 0x3364 : Axis0_Pn512_Input_Contact_Data_Low_Bits_at_Bus_Control
******************************************************************************/
/**
* \addtogroup 0x3364 0x3364 | Axis0_Pn512_Input_Contact_Data_Low_Bits_at_Bus_Control
* @{
* \brief Object 0x3364 (Axis0_Pn512_Input_Contact_Data_Low_Bits_at_Bus_Control) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3364 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3364[] = "Axis0_Pn512_Input_Contact_Data_Low_Bits_at_Bus_Control\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn512_Input_Contact_Data_Low_Bits_at_Bus_Control0x3364;
/** @}*/



/******************************************************************************
*                    Object 0x3365 : Axis0_Pn513_Input_Contact_Data_High_Bit_at_Bus_Control
******************************************************************************/
/**
* \addtogroup 0x3365 0x3365 | Axis0_Pn513_Input_Contact_Data_High_Bit_at_Bus_Control
* @{
* \brief Object 0x3365 (Axis0_Pn513_Input_Contact_Data_High_Bit_at_Bus_Control) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3365 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3365[] = "Axis0_Pn513_Input_Contact_Data_High_Bit_at_Bus_Control\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn513_Input_Contact_Data_High_Bit_at_Bus_Control0x3365;
/** @}*/



/******************************************************************************
*                    Object 0x3366 : Axis0_Pn514_Input_Signals_Filter_Time
******************************************************************************/
/**
* \addtogroup 0x3366 0x3366 | Axis0_Pn514_Input_Signals_Filter_Time
* @{
* \brief Object 0x3366 (Axis0_Pn514_Input_Signals_Filter_Time) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3366 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3366[] = "Axis0_Pn514_Input_Signals_Filter_Time\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn514_Input_Signals_Filter_Time0x3366;
/** @}*/



/******************************************************************************
*                    Object 0x3367 : Axis0_Pn515_Alarm_Signals_Filter_Time
******************************************************************************/
/**
* \addtogroup 0x3367 0x3367 | Axis0_Pn515_Alarm_Signals_Filter_Time
* @{
* \brief Object 0x3367 (Axis0_Pn515_Alarm_Signals_Filter_Time) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3367 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3367[] = "Axis0_Pn515_Alarm_Signals_Filter_Time\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn515_Alarm_Signals_Filter_Time0x3367;
/** @}*/



/******************************************************************************
*                    Object 0x3368 : Axis0_Pn516_Input_Singal_Inverts_1
******************************************************************************/
/**
* \addtogroup 0x3368 0x3368 | Axis0_Pn516_Input_Singal_Inverts_1
* @{
* \brief Object 0x3368 (Axis0_Pn516_Input_Singal_Inverts_1) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3368 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3368[] = "Axis0_Pn516_Input_Singal_Inverts_1\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn516_Input_Singal_Inverts_10x3368;
/** @}*/



/******************************************************************************
*                    Object 0x3369 : Axis0_Pn517_Input_Singal_Inverts_2
******************************************************************************/
/**
* \addtogroup 0x3369 0x3369 | Axis0_Pn517_Input_Singal_Inverts_2
* @{
* \brief Object 0x3369 (Axis0_Pn517_Input_Singal_Inverts_2) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3369 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3369[] = "Axis0_Pn517_Input_Singal_Inverts_2\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn517_Input_Singal_Inverts_20x3369;
/** @}*/



/******************************************************************************
*                    Object 0x336A : Axis0_Pn518_Dynamic_Brake_Time
******************************************************************************/
/**
* \addtogroup 0x336A 0x336A | Axis0_Pn518_Dynamic_Brake_Time
* @{
* \brief Object 0x336A (Axis0_Pn518_Dynamic_Brake_Time) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x336A = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x336A[] = "Axis0_Pn518_Dynamic_Brake_Time\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn518_Dynamic_Brake_Time0x336A;
/** @}*/



/******************************************************************************
*                    Object 0x336B : Axis0_Pn519_Serial_Encoder_Error_Allowed_Time
******************************************************************************/
/**
* \addtogroup 0x336B 0x336B | Axis0_Pn519_Serial_Encoder_Error_Allowed_Time
* @{
* \brief Object 0x336B (Axis0_Pn519_Serial_Encoder_Error_Allowed_Time) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x336B = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x336B[] = "Axis0_Pn519_Serial_Encoder_Error_Allowed_Time\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn519_Serial_Encoder_Error_Allowed_Time0x336B;
/** @}*/



/******************************************************************************
*                    Object 0x336C : Axis0_Pn520_Positioning_Completion_Time
******************************************************************************/
/**
* \addtogroup 0x336C 0x336C | Axis0_Pn520_Positioning_Completion_Time
* @{
* \brief Object 0x336C (Axis0_Pn520_Positioning_Completion_Time) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x336C = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x336C[] = "Axis0_Pn520_Positioning_Completion_Time\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn520_Positioning_Completion_Time0x336C;
/** @}*/



/******************************************************************************
*                    Object 0x336D : Axis0_Pn521_Alarm_Masks_1
******************************************************************************/
/**
* \addtogroup 0x336D 0x336D | Axis0_Pn521_Alarm_Masks_1
* @{
* \brief Object 0x336D (Axis0_Pn521_Alarm_Masks_1) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x336D = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x336D[] = "Axis0_Pn521_Alarm_Masks_1\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn521_Alarm_Masks_10x336D;
/** @}*/



/******************************************************************************
*                    Object 0x3371 : Axis0_Pn525_Overload_Alarm_Level
******************************************************************************/
/**
* \addtogroup 0x3371 0x3371 | Axis0_Pn525_Overload_Alarm_Level
* @{
* \brief Object 0x3371 (Axis0_Pn525_Overload_Alarm_Level) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3371 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3371[] = "Axis0_Pn525_Overload_Alarm_Level\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn525_Overload_Alarm_Level0x3371;
/** @}*/



/******************************************************************************
*                    Object 0x3374 : Axis0_Pn528_Ouput_Signal_Inverts
******************************************************************************/
/**
* \addtogroup 0x3374 0x3374 | Axis0_Pn528_Ouput_Signal_Inverts
* @{
* \brief Object 0x3374 (Axis0_Pn528_Ouput_Signal_Inverts) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3374 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3374[] = "Axis0_Pn528_Ouput_Signal_Inverts\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn528_Ouput_Signal_Inverts0x3374;
/** @}*/



/******************************************************************************
*                    Object 0x3375 : Axis0_Pn529_Torque_Detection_Signal_Output_Level
******************************************************************************/
/**
* \addtogroup 0x3375 0x3375 | Axis0_Pn529_Torque_Detection_Signal_Output_Level
* @{
* \brief Object 0x3375 (Axis0_Pn529_Torque_Detection_Signal_Output_Level) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3375 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3375[] = "Axis0_Pn529_Torque_Detection_Signal_Output_Level\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn529_Torque_Detection_Signal_Output_Level0x3375;
/** @}*/



/******************************************************************************
*                    Object 0x3376 : Axis0_Pn530_Torque_Detection_Signal_Ouput_Time
******************************************************************************/
/**
* \addtogroup 0x3376 0x3376 | Axis0_Pn530_Torque_Detection_Signal_Ouput_Time
* @{
* \brief Object 0x3376 (Axis0_Pn530_Torque_Detection_Signal_Ouput_Time) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3376 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3376[] = "Axis0_Pn530_Torque_Detection_Signal_Ouput_Time\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn530_Torque_Detection_Signal_Ouput_Time0x3376;
/** @}*/



/******************************************************************************
*                    Object 0x3379 : Axis0_Pn533_Dynamic_Brake_Current_Detection_Level
******************************************************************************/
/**
* \addtogroup 0x3379 0x3379 | Axis0_Pn533_Dynamic_Brake_Current_Detection_Level
* @{
* \brief Object 0x3379 (Axis0_Pn533_Dynamic_Brake_Current_Detection_Level) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3379 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3379[] = "Axis0_Pn533_Dynamic_Brake_Current_Detection_Level\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn533_Dynamic_Brake_Current_Detection_Level0x3379;
/** @}*/



/******************************************************************************
*                    Object 0x337A : Axis0_Pn534_IPM_Junction_Temperature_Detection_Level
******************************************************************************/
/**
* \addtogroup 0x337A 0x337A | Axis0_Pn534_IPM_Junction_Temperature_Detection_Level
* @{
* \brief Object 0x337A (Axis0_Pn534_IPM_Junction_Temperature_Detection_Level) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x337A = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x337A[] = "Axis0_Pn534_IPM_Junction_Temperature_Detection_Level\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn534_IPM_Junction_Temperature_Detection_Level0x337A;
/** @}*/



/******************************************************************************
*                    Object 0x337B : Axis0_Pn535_Discharging_Resistor_Resistance
******************************************************************************/
/**
* \addtogroup 0x337B 0x337B | Axis0_Pn535_Discharging_Resistor_Resistance
* @{
* \brief Object 0x337B (Axis0_Pn535_Discharging_Resistor_Resistance) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x337B = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x337B[] = "Axis0_Pn535_Discharging_Resistor_Resistance\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn535_Discharging_Resistor_Resistance0x337B;
/** @}*/



/******************************************************************************
*                    Object 0x337C : Axis0_Pn536_Discharging_Resistor_Power
******************************************************************************/
/**
* \addtogroup 0x337C 0x337C | Axis0_Pn536_Discharging_Resistor_Power
* @{
* \brief Object 0x337C (Axis0_Pn536_Discharging_Resistor_Power) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x337C = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x337C[] = "Axis0_Pn536_Discharging_Resistor_Power\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn536_Discharging_Resistor_Power0x337C;
/** @}*/



/******************************************************************************
*                    Object 0x337E : Axis0_Pn538_Momentary_Power_Interruption_Hold_Time
******************************************************************************/
/**
* \addtogroup 0x337E 0x337E | Axis0_Pn538_Momentary_Power_Interruption_Hold_Time
* @{
* \brief Object 0x337E (Axis0_Pn538_Momentary_Power_Interruption_Hold_Time) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x337E = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x337E[] = "Axis0_Pn538_Momentary_Power_Interruption_Hold_Time\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn538_Momentary_Power_Interruption_Hold_Time0x337E;
/** @}*/



/******************************************************************************
*                    Object 0x337F : Axis0_Pn539_Pumping_Turn_ON_Delay_Time
******************************************************************************/
/**
* \addtogroup 0x337F 0x337F | Axis0_Pn539_Pumping_Turn_ON_Delay_Time
* @{
* \brief Object 0x337F (Axis0_Pn539_Pumping_Turn_ON_Delay_Time) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x337F = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x337F[] = "Axis0_Pn539_Pumping_Turn_ON_Delay_Time\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn539_Pumping_Turn_ON_Delay_Time0x337F;
/** @}*/



/******************************************************************************
*                    Object 0x3380 : Axis0_Pn540_Pumping_Turn_OFF_Delay_Time
******************************************************************************/
/**
* \addtogroup 0x3380 0x3380 | Axis0_Pn540_Pumping_Turn_OFF_Delay_Time
* @{
* \brief Object 0x3380 (Axis0_Pn540_Pumping_Turn_OFF_Delay_Time) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3380 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3380[] = "Axis0_Pn540_Pumping_Turn_OFF_Delay_Time\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn540_Pumping_Turn_OFF_Delay_Time0x3380;
/** @}*/



/******************************************************************************
*                    Object 0x33BC : Axis0_Pn600_PSO_Position_Resolution_Ratio
******************************************************************************/
/**
* \addtogroup 0x33BC 0x33BC | Axis0_Pn600_PSO_Position_Resolution_Ratio
* @{
* \brief Object 0x33BC (Axis0_Pn600_PSO_Position_Resolution_Ratio) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x33BC = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x33BC[] = "Axis0_Pn600_PSO_Position_Resolution_Ratio\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn600_PSO_Position_Resolution_Ratio0x33BC;
/** @}*/



/******************************************************************************
*                    Object 0x33BD : Axis0_Pn601_PSO_mode_of_Comparision
******************************************************************************/
/**
* \addtogroup 0x33BD 0x33BD | Axis0_Pn601_PSO_mode_of_Comparision
* @{
* \brief Object 0x33BD (Axis0_Pn601_PSO_mode_of_Comparision) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x33BD = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x33BD[] = "Axis0_Pn601_PSO_mode_of_Comparision\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn601_PSO_mode_of_Comparision0x33BD;
/** @}*/



/******************************************************************************
*                    Object 0x33BE : Axis0_Pn602_PSO_output_polarity
******************************************************************************/
/**
* \addtogroup 0x33BE 0x33BE | Axis0_Pn602_PSO_output_polarity
* @{
* \brief Object 0x33BE (Axis0_Pn602_PSO_output_polarity) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x33BE = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x33BE[] = "Axis0_Pn602_PSO_output_polarity\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn602_PSO_output_polarity0x33BE;
/** @}*/



/******************************************************************************
*                    Object 0x33BF : Axis0_Pn603_PSO_output_type
******************************************************************************/
/**
* \addtogroup 0x33BF 0x33BF | Axis0_Pn603_PSO_output_type
* @{
* \brief Object 0x33BF (Axis0_Pn603_PSO_output_type) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x33BF = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x33BF[] = "Axis0_Pn603_PSO_output_type\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn603_PSO_output_type0x33BF;
/** @}*/



/******************************************************************************
*                    Object 0x33C0 : Axis0_Pn604_PSO_Settings_of_output_pluse_width
******************************************************************************/
/**
* \addtogroup 0x33C0 0x33C0 | Axis0_Pn604_PSO_Settings_of_output_pluse_width
* @{
* \brief Object 0x33C0 (Axis0_Pn604_PSO_Settings_of_output_pluse_width) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x33C0 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x33C0[] = "Axis0_Pn604_PSO_Settings_of_output_pluse_width\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn604_PSO_Settings_of_output_pluse_width0x33C0;
/** @}*/



/******************************************************************************
*                    Object 0x33C1 : Axis0_Pn605_PSO_compensation_of_output_delay
******************************************************************************/
/**
* \addtogroup 0x33C1 0x33C1 | Axis0_Pn605_PSO_compensation_of_output_delay
* @{
* \brief Object 0x33C1 (Axis0_Pn605_PSO_compensation_of_output_delay) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x33C1 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x33C1[] = "Axis0_Pn605_PSO_compensation_of_output_delay\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn605_PSO_compensation_of_output_delay0x33C1;
/** @}*/



/******************************************************************************
*                    Object 0x33C2 : Axis0_Pn606_PSO_origin_offset
******************************************************************************/
/**
* \addtogroup 0x33C2 0x33C2 | Axis0_Pn606_PSO_origin_offset
* @{
* \brief Object 0x33C2 (Axis0_Pn606_PSO_origin_offset) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x33C2 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x33C2[] = "Axis0_Pn606_PSO_origin_offset\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn606_PSO_origin_offset0x33C2;
/** @}*/



/******************************************************************************
*                    Object 0x33C3 : Axis0_Pn607_PSO_Start_point_of_camparision
******************************************************************************/
/**
* \addtogroup 0x33C3 0x33C3 | Axis0_Pn607_PSO_Start_point_of_camparision
* @{
* \brief Object 0x33C3 (Axis0_Pn607_PSO_Start_point_of_camparision) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x33C3 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x33C3[] = "Axis0_Pn607_PSO_Start_point_of_camparision\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn607_PSO_Start_point_of_camparision0x33C3;
/** @}*/



/******************************************************************************
*                    Object 0x33C4 : Axis0_Pn608_PSO_End_point_of_camparision
******************************************************************************/
/**
* \addtogroup 0x33C4 0x33C4 | Axis0_Pn608_PSO_End_point_of_camparision
* @{
* \brief Object 0x33C4 (Axis0_Pn608_PSO_End_point_of_camparision) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x33C4 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x33C4[] = "Axis0_Pn608_PSO_End_point_of_camparision\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn608_PSO_End_point_of_camparision0x33C4;
/** @}*/



/******************************************************************************
*                    Object 0x33C5 : Axis0_Pn609_Properties_of_PSO_comparison_point_1
******************************************************************************/
/**
* \addtogroup 0x33C5 0x33C5 | Axis0_Pn609_Properties_of_PSO_comparison_point_1
* @{
* \brief Object 0x33C5 (Axis0_Pn609_Properties_of_PSO_comparison_point_1) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x33C5 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x33C5[] = "Axis0_Pn609_Properties_of_PSO_comparison_point_1\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn609_Properties_of_PSO_comparison_point_10x33C5;
/** @}*/



/******************************************************************************
*                    Object 0x33C6 : Axis0_Pn610_Target_position_of_PSO_comparison_point_1
******************************************************************************/
/**
* \addtogroup 0x33C6 0x33C6 | Axis0_Pn610_Target_position_of_PSO_comparison_point_1
* @{
* \brief Object 0x33C6 (Axis0_Pn610_Target_position_of_PSO_comparison_point_1) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x33C6 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x33C6[] = "Axis0_Pn610_Target_position_of_PSO_comparison_point_1\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn610_Target_position_of_PSO_comparison_point_10x33C6;
/** @}*/



/******************************************************************************
*                    Object 0x33C7 : Axis0_Pn611_Properties_of_PSO_comparison_point_2
******************************************************************************/
/**
* \addtogroup 0x33C7 0x33C7 | Axis0_Pn611_Properties_of_PSO_comparison_point_2
* @{
* \brief Object 0x33C7 (Axis0_Pn611_Properties_of_PSO_comparison_point_2) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x33C7 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x33C7[] = "Axis0_Pn611_Properties_of_PSO_comparison_point_2\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn611_Properties_of_PSO_comparison_point_20x33C7;
/** @}*/



/******************************************************************************
*                    Object 0x33C8 : Axis0_Pn612_Target_position_of_PSO_comparison_point_2
******************************************************************************/
/**
* \addtogroup 0x33C8 0x33C8 | Axis0_Pn612_Target_position_of_PSO_comparison_point_2
* @{
* \brief Object 0x33C8 (Axis0_Pn612_Target_position_of_PSO_comparison_point_2) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x33C8 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x33C8[] = "Axis0_Pn612_Target_position_of_PSO_comparison_point_2\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn612_Target_position_of_PSO_comparison_point_20x33C8;
/** @}*/



/******************************************************************************
*                    Object 0x33C9 : Axis0_Pn613_Properties_of_PSO_comparison_point_3
******************************************************************************/
/**
* \addtogroup 0x33C9 0x33C9 | Axis0_Pn613_Properties_of_PSO_comparison_point_3
* @{
* \brief Object 0x33C9 (Axis0_Pn613_Properties_of_PSO_comparison_point_3) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x33C9 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x33C9[] = "Axis0_Pn613_Properties_of_PSO_comparison_point_3\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn613_Properties_of_PSO_comparison_point_30x33C9;
/** @}*/



/******************************************************************************
*                    Object 0x33CA : Axis0_Pn614_Target_position_of_PSO_comparison_point_3
******************************************************************************/
/**
* \addtogroup 0x33CA 0x33CA | Axis0_Pn614_Target_position_of_PSO_comparison_point_3
* @{
* \brief Object 0x33CA (Axis0_Pn614_Target_position_of_PSO_comparison_point_3) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x33CA = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x33CA[] = "Axis0_Pn614_Target_position_of_PSO_comparison_point_3\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn614_Target_position_of_PSO_comparison_point_30x33CA;
/** @}*/



/******************************************************************************
*                    Object 0x33CB : Axis0_Pn615_Properties_of_PSO_comparison_point_4
******************************************************************************/
/**
* \addtogroup 0x33CB 0x33CB | Axis0_Pn615_Properties_of_PSO_comparison_point_4
* @{
* \brief Object 0x33CB (Axis0_Pn615_Properties_of_PSO_comparison_point_4) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x33CB = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x33CB[] = "Axis0_Pn615_Properties_of_PSO_comparison_point_4\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn615_Properties_of_PSO_comparison_point_40x33CB;
/** @}*/



/******************************************************************************
*                    Object 0x33CC : Axis0_Pn616_Target_position_of_PSO_comparison_point_4
******************************************************************************/
/**
* \addtogroup 0x33CC 0x33CC | Axis0_Pn616_Target_position_of_PSO_comparison_point_4
* @{
* \brief Object 0x33CC (Axis0_Pn616_Target_position_of_PSO_comparison_point_4) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x33CC = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x33CC[] = "Axis0_Pn616_Target_position_of_PSO_comparison_point_4\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn616_Target_position_of_PSO_comparison_point_40x33CC;
/** @}*/



/******************************************************************************
*                    Object 0x33CD : Axis0_Pn617_Properties_of_PSO_comparison_point_5
******************************************************************************/
/**
* \addtogroup 0x33CD 0x33CD | Axis0_Pn617_Properties_of_PSO_comparison_point_5
* @{
* \brief Object 0x33CD (Axis0_Pn617_Properties_of_PSO_comparison_point_5) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x33CD = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x33CD[] = "Axis0_Pn617_Properties_of_PSO_comparison_point_5\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn617_Properties_of_PSO_comparison_point_50x33CD;
/** @}*/



/******************************************************************************
*                    Object 0x33CE : Axis0_Pn618_Target_position_of_PSO_comparison_point_5
******************************************************************************/
/**
* \addtogroup 0x33CE 0x33CE | Axis0_Pn618_Target_position_of_PSO_comparison_point_5
* @{
* \brief Object 0x33CE (Axis0_Pn618_Target_position_of_PSO_comparison_point_5) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x33CE = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x33CE[] = "Axis0_Pn618_Target_position_of_PSO_comparison_point_5\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn618_Target_position_of_PSO_comparison_point_50x33CE;
/** @}*/



/******************************************************************************
*                    Object 0x33CF : Axis0_Pn619_Properties_of_PSO_comparison_point_6
******************************************************************************/
/**
* \addtogroup 0x33CF 0x33CF | Axis0_Pn619_Properties_of_PSO_comparison_point_6
* @{
* \brief Object 0x33CF (Axis0_Pn619_Properties_of_PSO_comparison_point_6) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x33CF = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x33CF[] = "Axis0_Pn619_Properties_of_PSO_comparison_point_6\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn619_Properties_of_PSO_comparison_point_60x33CF;
/** @}*/



/******************************************************************************
*                    Object 0x33D0 : Axis0_Pn620_Target_position_of_PSO_comparison_point_6
******************************************************************************/
/**
* \addtogroup 0x33D0 0x33D0 | Axis0_Pn620_Target_position_of_PSO_comparison_point_6
* @{
* \brief Object 0x33D0 (Axis0_Pn620_Target_position_of_PSO_comparison_point_6) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x33D0 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x33D0[] = "Axis0_Pn620_Target_position_of_PSO_comparison_point_6\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn620_Target_position_of_PSO_comparison_point_60x33D0;
/** @}*/



/******************************************************************************
*                    Object 0x33D1 : Axis0_Pn621_Properties_of_PSO_comparison_point_7
******************************************************************************/
/**
* \addtogroup 0x33D1 0x33D1 | Axis0_Pn621_Properties_of_PSO_comparison_point_7
* @{
* \brief Object 0x33D1 (Axis0_Pn621_Properties_of_PSO_comparison_point_7) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x33D1 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x33D1[] = "Axis0_Pn621_Properties_of_PSO_comparison_point_7\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn621_Properties_of_PSO_comparison_point_70x33D1;
/** @}*/



/******************************************************************************
*                    Object 0x33D2 : Axis0_Pn622_Target_position_of_PSO_comparison_point_7
******************************************************************************/
/**
* \addtogroup 0x33D2 0x33D2 | Axis0_Pn622_Target_position_of_PSO_comparison_point_7
* @{
* \brief Object 0x33D2 (Axis0_Pn622_Target_position_of_PSO_comparison_point_7) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x33D2 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x33D2[] = "Axis0_Pn622_Target_position_of_PSO_comparison_point_7\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn622_Target_position_of_PSO_comparison_point_70x33D2;
/** @}*/



/******************************************************************************
*                    Object 0x33D3 : Axis0_Pn623_Properties_of_PSO_comparison_point_8
******************************************************************************/
/**
* \addtogroup 0x33D3 0x33D3 | Axis0_Pn623_Properties_of_PSO_comparison_point_8
* @{
* \brief Object 0x33D3 (Axis0_Pn623_Properties_of_PSO_comparison_point_8) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x33D3 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x33D3[] = "Axis0_Pn623_Properties_of_PSO_comparison_point_8\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn623_Properties_of_PSO_comparison_point_80x33D3;
/** @}*/



/******************************************************************************
*                    Object 0x33D4 : Axis0_Pn624_Target_position_of_PSO_comparison_point8
******************************************************************************/
/**
* \addtogroup 0x33D4 0x33D4 | Axis0_Pn624_Target_position_of_PSO_comparison_point8
* @{
* \brief Object 0x33D4 (Axis0_Pn624_Target_position_of_PSO_comparison_point8) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x33D4 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x33D4[] = "Axis0_Pn624_Target_position_of_PSO_comparison_point8\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn624_Target_position_of_PSO_comparison_point80x33D4;
/** @}*/



/******************************************************************************
*                    Object 0x3424 : Axis0_Pn704_Device_Node_Number
******************************************************************************/
/**
* \addtogroup 0x3424 0x3424 | Axis0_Pn704_Device_Node_Number
* @{
* \brief Object 0x3424 (Axis0_Pn704_Device_Node_Number) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3424 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3424[] = "Axis0_Pn704_Device_Node_Number\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn704_Device_Node_Number0x3424;
/** @}*/



/******************************************************************************
*                    Object 0x3434 : Axis0_Pn720_Homing_Mode
******************************************************************************/
/**
* \addtogroup 0x3434 0x3434 | Axis0_Pn720_Homing_Mode
* @{
* \brief Object 0x3434 (Axis0_Pn720_Homing_Mode) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3434 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3434[] = "Axis0_Pn720_Homing_Mode\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn720_Homing_Mode0x3434;
/** @}*/



/******************************************************************************
*                    Object 0x3435 : Axis0_Pn721_Research_Reference_Point_Speed
******************************************************************************/
/**
* \addtogroup 0x3435 0x3435 | Axis0_Pn721_Research_Reference_Point_Speed
* @{
* \brief Object 0x3435 (Axis0_Pn721_Research_Reference_Point_Speed) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3435 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3435[] = "Axis0_Pn721_Research_Reference_Point_Speed\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn721_Research_Reference_Point_Speed0x3435;
/** @}*/



/******************************************************************************
*                    Object 0x3436 : Axis0_Pn722_Origin_Research_Speed
******************************************************************************/
/**
* \addtogroup 0x3436 0x3436 | Axis0_Pn722_Origin_Research_Speed
* @{
* \brief Object 0x3436 (Axis0_Pn722_Origin_Research_Speed) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3436 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3436[] = "Axis0_Pn722_Origin_Research_Speed\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn722_Origin_Research_Speed0x3436;
/** @}*/



/******************************************************************************
*                    Object 0x3437 : Axis0_Pn723_Origin_Research_Acceleration
******************************************************************************/
/**
* \addtogroup 0x3437 0x3437 | Axis0_Pn723_Origin_Research_Acceleration
* @{
* \brief Object 0x3437 (Axis0_Pn723_Origin_Research_Acceleration) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3437 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3437[] = "Axis0_Pn723_Origin_Research_Acceleration\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn723_Origin_Research_Acceleration0x3437;
/** @}*/



/******************************************************************************
*                    Object 0x3438 : Axis0_Pn724_Origin_Return_Offset_Pulse
******************************************************************************/
/**
* \addtogroup 0x3438 0x3438 | Axis0_Pn724_Origin_Return_Offset_Pulse
* @{
* \brief Object 0x3438 (Axis0_Pn724_Origin_Return_Offset_Pulse) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3438 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3438[] = "Axis0_Pn724_Origin_Return_Offset_Pulse\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn724_Origin_Return_Offset_Pulse0x3438;
/** @}*/



/******************************************************************************
*                    Object 0x3439 : Axis0_Pn725_Electronic_Gear_Ratio_Numerator
******************************************************************************/
/**
* \addtogroup 0x3439 0x3439 | Axis0_Pn725_Electronic_Gear_Ratio_Numerator
* @{
* \brief Object 0x3439 (Axis0_Pn725_Electronic_Gear_Ratio_Numerator) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x3439 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x3439[] = "Axis0_Pn725_Electronic_Gear_Ratio_Numerator\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn725_Electronic_Gear_Ratio_Numerator0x3439;
/** @}*/



/******************************************************************************
*                    Object 0x343A : Axis0_Pn726_Electronic_Gear_Ratio_Denominator
******************************************************************************/
/**
* \addtogroup 0x343A 0x343A | Axis0_Pn726_Electronic_Gear_Ratio_Denominator
* @{
* \brief Object 0x343A (Axis0_Pn726_Electronic_Gear_Ratio_Denominator) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x343A = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x343A[] = "Axis0_Pn726_Electronic_Gear_Ratio_Denominator\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Axis0_Pn726_Electronic_Gear_Ratio_Denominator0x343A;
/** @}*/



/******************************************************************************
*                    Object 0x603F : Error_code_0
******************************************************************************/
/**
* \addtogroup 0x603F 0x603F | Error_code_0
* @{
* \brief Object 0x603F (Error_code_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x603F = { DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x603F[] = "Error_code_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO UINT16 Error_code_00x603F;
/** @}*/



/******************************************************************************
*                    Object 0x6040 : Controlword_0
******************************************************************************/
/**
* \addtogroup 0x6040 0x6040 | Controlword_0
* @{
* \brief Object 0x6040 (Controlword_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6040 = { DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x6040[] = "Controlword_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO UINT16 Controlword_00x6040;
/** @}*/



/******************************************************************************
*                    Object 0x6041 : Statusword_0
******************************************************************************/
/**
* \addtogroup 0x6041 0x6041 | Statusword_0
* @{
* \brief Object 0x6041 (Statusword_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6041 = { DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x6041[] = "Statusword_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO UINT16 Statusword_00x6041;
/** @}*/



/******************************************************************************
*                    Object 0x605A : Quick_stop_option_code_0
******************************************************************************/
/**
* \addtogroup 0x605A 0x605A | Quick_stop_option_code_0
* @{
* \brief Object 0x605A (Quick_stop_option_code_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x605A = { DEFTYPE_INTEGER16 , 0x10 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x605A[] = "Quick_stop_option_code_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT16 Quick_stop_option_code_00x605A;
/** @}*/



/******************************************************************************
*                    Object 0x605B : Shutdown_option_code_0
******************************************************************************/
/**
* \addtogroup 0x605B 0x605B | Shutdown_option_code_0
* @{
* \brief Object 0x605B (Shutdown_option_code_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x605B = { DEFTYPE_INTEGER16 , 0x10 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x605B[] = "Shutdown_option_code_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT16 Shutdown_option_code_00x605B;
/** @}*/



/******************************************************************************
*                    Object 0x605C : Disable_operation_option_code_0
******************************************************************************/
/**
* \addtogroup 0x605C 0x605C | Disable_operation_option_code_0
* @{
* \brief Object 0x605C (Disable_operation_option_code_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x605C = { DEFTYPE_INTEGER16 , 0x10 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x605C[] = "Disable_operation_option_code_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT16 Disable_operation_option_code_00x605C;
/** @}*/



/******************************************************************************
*                    Object 0x605D : Halt_option_code_0
******************************************************************************/
/**
* \addtogroup 0x605D 0x605D | Halt_option_code_0
* @{
* \brief Object 0x605D (Halt_option_code_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x605D = { DEFTYPE_INTEGER16 , 0x10 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x605D[] = "Halt_option_code_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT16 Halt_option_code_00x605D;
/** @}*/



/******************************************************************************
*                    Object 0x605E : Fault_reaction_option_code_0
******************************************************************************/
/**
* \addtogroup 0x605E 0x605E | Fault_reaction_option_code_0
* @{
* \brief Object 0x605E (Fault_reaction_option_code_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x605E = { DEFTYPE_INTEGER16 , 0x10 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x605E[] = "Fault_reaction_option_code_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT16 Fault_reaction_option_code_00x605E;
/** @}*/



/******************************************************************************
*                    Object 0x6060 : Modes_of_operation_0
******************************************************************************/
/**
* \addtogroup 0x6060 0x6060 | Modes_of_operation_0
* @{
* \brief Object 0x6060 (Modes_of_operation_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6060 = { DEFTYPE_INTEGER8 , 0x8 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x6060[] = "Modes_of_operation_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT8 Modes_of_operation_00x6060;
/** @}*/



/******************************************************************************
*                    Object 0x6061 : Modes_of_operation_display_0
******************************************************************************/
/**
* \addtogroup 0x6061 0x6061 | Modes_of_operation_display_0
* @{
* \brief Object 0x6061 (Modes_of_operation_display_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6061 = { DEFTYPE_INTEGER8 , 0x8 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x6061[] = "Modes_of_operation_display_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT8 Modes_of_operation_display_00x6061;
/** @}*/



/******************************************************************************
*                    Object 0x6062 : Position_demand_value_0
******************************************************************************/
/**
* \addtogroup 0x6062 0x6062 | Position_demand_value_0
* @{
* \brief Object 0x6062 (Position_demand_value_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6062 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x6062[] = "Position_demand_value_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Position_demand_value_00x6062;
/** @}*/



/******************************************************************************
*                    Object 0x6063 : Position_actual_internal_value_0
******************************************************************************/
/**
* \addtogroup 0x6063 0x6063 | Position_actual_internal_value_0
* @{
* \brief Object 0x6063 (Position_actual_internal_value_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6063 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x6063[] = "Position_actual_internal_value_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Position_actual_internal_value_00x6063;
/** @}*/



/******************************************************************************
*                    Object 0x6064 : Position_actual_value_0
******************************************************************************/
/**
* \addtogroup 0x6064 0x6064 | Position_actual_value_0
* @{
* \brief Object 0x6064 (Position_actual_value_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6064 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x6064[] = "Position_actual_value_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Position_actual_value_00x6064;
/** @}*/



/******************************************************************************
*                    Object 0x6065 : Following_error_window_0
******************************************************************************/
/**
* \addtogroup 0x6065 0x6065 | Following_error_window_0
* @{
* \brief Object 0x6065 (Following_error_window_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6065 = { DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x6065[] = "Following_error_window_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO UINT32 Following_error_window_00x6065;
/** @}*/



/******************************************************************************
*                    Object 0x6066 : Following_error_time_out_0
******************************************************************************/
/**
* \addtogroup 0x6066 0x6066 | Following_error_time_out_0
* @{
* \brief Object 0x6066 (Following_error_time_out_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6066 = { DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x6066[] = "Following_error_time_out_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO UINT16 Following_error_time_out_00x6066;
/** @}*/



/******************************************************************************
*                    Object 0x6067 : Position_window_0
******************************************************************************/
/**
* \addtogroup 0x6067 0x6067 | Position_window_0
* @{
* \brief Object 0x6067 (Position_window_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6067 = { DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x6067[] = "Position_window_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO UINT32 Position_window_00x6067;
/** @}*/



/******************************************************************************
*                    Object 0x6068 : Position_window_time_0
******************************************************************************/
/**
* \addtogroup 0x6068 0x6068 | Position_window_time_0
* @{
* \brief Object 0x6068 (Position_window_time_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6068 = { DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x6068[] = "Position_window_time_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO UINT16 Position_window_time_00x6068;
/** @}*/



/******************************************************************************
*                    Object 0x6069 : velocity_sensor_actual_value_0
******************************************************************************/
/**
* \addtogroup 0x6069 0x6069 | velocity_sensor_actual_value_0
* @{
* \brief Object 0x6069 (velocity_sensor_actual_value_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6069 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x6069[] = "velocity_sensor_actual_value_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Velocity_sensor_actual_value_00x6069;
/** @}*/



/******************************************************************************
*                    Object 0x606B : velocity_demand_value_0
******************************************************************************/
/**
* \addtogroup 0x606B 0x606B | velocity_demand_value_0
* @{
* \brief Object 0x606B (velocity_demand_value_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x606B = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x606B[] = "velocity_demand_value_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Velocity_demand_value_00x606B;
/** @}*/



/******************************************************************************
*                    Object 0x606C : Velocity_actual_value_0
******************************************************************************/
/**
* \addtogroup 0x606C 0x606C | Velocity_actual_value_0
* @{
* \brief Object 0x606C (Velocity_actual_value_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x606C = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x606C[] = "Velocity_actual_value_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Velocity_actual_value_00x606C;
/** @}*/



/******************************************************************************
*                    Object 0x606D : Velocity_window_0
******************************************************************************/
/**
* \addtogroup 0x606D 0x606D | Velocity_window_0
* @{
* \brief Object 0x606D (Velocity_window_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x606D = { DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x606D[] = "Velocity_window_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO UINT16 Velocity_window_00x606D;
/** @}*/



/******************************************************************************
*                    Object 0x606E : Velocity_window_time_0
******************************************************************************/
/**
* \addtogroup 0x606E 0x606E | Velocity_window_time_0
* @{
* \brief Object 0x606E (Velocity_window_time_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x606E = { DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x606E[] = "Velocity_window_time_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO UINT16 Velocity_window_time_00x606E;
/** @}*/



/******************************************************************************
*                    Object 0x606F : Velocity_threshold_0
******************************************************************************/
/**
* \addtogroup 0x606F 0x606F | Velocity_threshold_0
* @{
* \brief Object 0x606F (Velocity_threshold_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x606F = { DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x606F[] = "Velocity_threshold_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO UINT16 Velocity_threshold_00x606F;
/** @}*/



/******************************************************************************
*                    Object 0x6070 : Velocity_threshold_time_0
******************************************************************************/
/**
* \addtogroup 0x6070 0x6070 | Velocity_threshold_time_0
* @{
* \brief Object 0x6070 (Velocity_threshold_time_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6070 = { DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x6070[] = "Velocity_threshold_time_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO UINT16 Velocity_threshold_time_00x6070;
/** @}*/



/******************************************************************************
*                    Object 0x6071 : Target_torque_0
******************************************************************************/
/**
* \addtogroup 0x6071 0x6071 | Target_torque_0
* @{
* \brief Object 0x6071 (Target_torque_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6071 = { DEFTYPE_INTEGER16 , 0x10 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x6071[] = "Target_torque_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT16 Target_torque_00x6071;
/** @}*/



/******************************************************************************
*                    Object 0x6072 : Max_torque_0
******************************************************************************/
/**
* \addtogroup 0x6072 0x6072 | Max_torque_0
* @{
* \brief Object 0x6072 (Max_torque_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6072 = { DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x6072[] = "Max_torque_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO UINT16 Max_torque_00x6072;
/** @}*/



/******************************************************************************
*                    Object 0x6074 : Torque_demand_0
******************************************************************************/
/**
* \addtogroup 0x6074 0x6074 | Torque_demand_0
* @{
* \brief Object 0x6074 (Torque_demand_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6074 = { DEFTYPE_INTEGER16 , 0x10 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x6074[] = "Torque_demand_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT16 Torque_demand_00x6074;
/** @}*/



/******************************************************************************
*                    Object 0x6077 : Torque_actual_value_0
******************************************************************************/
/**
* \addtogroup 0x6077 0x6077 | Torque_actual_value_0
* @{
* \brief Object 0x6077 (Torque_actual_value_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6077 = { DEFTYPE_INTEGER16 , 0x10 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x6077[] = "Torque_actual_value_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT16 Torque_actual_value_00x6077;
/** @}*/



/******************************************************************************
*                    Object 0x6078 : Current_actual_value_0
******************************************************************************/
/**
* \addtogroup 0x6078 0x6078 | Current_actual_value_0
* @{
* \brief Object 0x6078 (Current_actual_value_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6078 = { DEFTYPE_INTEGER16 , 0x10 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x6078[] = "Current_actual_value_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT16 Current_actual_value_00x6078;
/** @}*/



/******************************************************************************
*                    Object 0x607A : Target_position_0
******************************************************************************/
/**
* \addtogroup 0x607A 0x607A | Target_position_0
* @{
* \brief Object 0x607A (Target_position_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x607A = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x607A[] = "Target_position_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Target_position_00x607A;
/** @}*/



/******************************************************************************
*                    Object 0x607C : Home_offset_0
******************************************************************************/
/**
* \addtogroup 0x607C 0x607C | Home_offset_0
* @{
* \brief Object 0x607C (Home_offset_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x607C = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x607C[] = "Home_offset_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Home_offset_00x607C;
/** @}*/



/******************************************************************************
*                    Object 0x607D : Software_position_limit_0
******************************************************************************/
/**
* \addtogroup 0x607D 0x607D | Software_position_limit_0
* @{
* \brief Object 0x607D (Software_position_limit_0) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Min_position_limit<br>
* SubIndex 2 - Max_position_limit<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x607D[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE }, /* Subindex1 - Min_position_limit */
{ DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE }}; /* Subindex2 - Max_position_limit */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x607D[] = "Software_position_limit_0\000"
"Min_position_limit\000"
"Max_position_limit\000\377";
#endif //#ifdef _OBJD_

#ifndef _MY_APPLICATION_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
INT32 Min_position_limit; /* Subindex1 - Min_position_limit */
INT32 Max_position_limit; /* Subindex2 - Max_position_limit */
} OBJ_STRUCT_PACKED_END
TOBJ607D;
#endif //#ifndef _MY_APPLICATION_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ607D Software_position_limit_00x607D
#if defined(_MY_APPLICATION_) && (_MY_APPLICATION_ == 1)
={2,0,0}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x607E : Polarity_0
******************************************************************************/
/**
* \addtogroup 0x607E 0x607E | Polarity_0
* @{
* \brief Object 0x607E (Polarity_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x607E = { DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x607E[] = "Polarity_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO UINT8 Polarity_00x607E;
/** @}*/



/******************************************************************************
*                    Object 0x607F : Max_profile_velocity_0
******************************************************************************/
/**
* \addtogroup 0x607F 0x607F | Max_profile_velocity_0
* @{
* \brief Object 0x607F (Max_profile_velocity_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x607F = { DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x607F[] = "Max_profile_velocity_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO UINT32 Max_profile_velocity_00x607F;
/** @}*/



/******************************************************************************
*                    Object 0x6080 : Max_motor_speed_0
******************************************************************************/
/**
* \addtogroup 0x6080 0x6080 | Max_motor_speed_0
* @{
* \brief Object 0x6080 (Max_motor_speed_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6080 = { DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x6080[] = "Max_motor_speed_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO UINT32 Max_motor_speed_00x6080;
/** @}*/



/******************************************************************************
*                    Object 0x6081 : Profile_velocity_0
******************************************************************************/
/**
* \addtogroup 0x6081 0x6081 | Profile_velocity_0
* @{
* \brief Object 0x6081 (Profile_velocity_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6081 = { DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x6081[] = "Profile_velocity_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO UINT32 Profile_velocity_00x6081;
/** @}*/



/******************************************************************************
*                    Object 0x6082 : End_velocity_0
******************************************************************************/
/**
* \addtogroup 0x6082 0x6082 | End_velocity_0
* @{
* \brief Object 0x6082 (End_velocity_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6082 = { DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x6082[] = "End_velocity_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO UINT32 End_velocity_00x6082;
/** @}*/



/******************************************************************************
*                    Object 0x6083 : Profile_acceleraion_0
******************************************************************************/
/**
* \addtogroup 0x6083 0x6083 | Profile_acceleraion_0
* @{
* \brief Object 0x6083 (Profile_acceleraion_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6083 = { DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x6083[] = "Profile_acceleraion_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO UINT32 Profile_acceleraion_00x6083;
/** @}*/



/******************************************************************************
*                    Object 0x6084 : Profile_deceleration_0
******************************************************************************/
/**
* \addtogroup 0x6084 0x6084 | Profile_deceleration_0
* @{
* \brief Object 0x6084 (Profile_deceleration_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6084 = { DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x6084[] = "Profile_deceleration_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO UINT32 Profile_deceleration_00x6084;
/** @}*/



/******************************************************************************
*                    Object 0x6085 : Quick_stop_deceleration_0
******************************************************************************/
/**
* \addtogroup 0x6085 0x6085 | Quick_stop_deceleration_0
* @{
* \brief Object 0x6085 (Quick_stop_deceleration_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6085 = { DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x6085[] = "Quick_stop_deceleration_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO UINT32 Quick_stop_deceleration_00x6085;
/** @}*/



/******************************************************************************
*                    Object 0x6086 : Motion_profile_type_0
******************************************************************************/
/**
* \addtogroup 0x6086 0x6086 | Motion_profile_type_0
* @{
* \brief Object 0x6086 (Motion_profile_type_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6086 = { DEFTYPE_INTEGER16 , 0x10 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x6086[] = "Motion_profile_type_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT16 Motion_profile_type_00x6086;
/** @}*/



/******************************************************************************
*                    Object 0x6087 : Torque_slope_0
******************************************************************************/
/**
* \addtogroup 0x6087 0x6087 | Torque_slope_0
* @{
* \brief Object 0x6087 (Torque_slope_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6087 = { DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x6087[] = "Torque_slope_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO UINT32 Torque_slope_00x6087;
/** @}*/



/******************************************************************************
*                    Object 0x6093 : Position_factor_0
******************************************************************************/
/**
* \addtogroup 0x6093 0x6093 | Position_factor_0
* @{
* \brief Object 0x6093 (Position_factor_0) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Position_numerator<br>
* SubIndex 2 - Position_divisor<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x6093[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE }, /* Subindex1 - Position_numerator */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE }}; /* Subindex2 - Position_divisor */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x6093[] = "Position_factor_0\000"
"Position_numerator\000"
"Position_divisor\000\377";
#endif //#ifdef _OBJD_

#ifndef _MY_APPLICATION_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 Position_numerator; /* Subindex1 - Position_numerator */
UINT32 Position_divisor; /* Subindex2 - Position_divisor */
} OBJ_STRUCT_PACKED_END
TOBJ6093;
#endif //#ifndef _MY_APPLICATION_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ6093 Position_factor_00x6093
#if defined(_MY_APPLICATION_) && (_MY_APPLICATION_ == 1)
={2,0,0}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x6094 : Velocity_encoder_factor_0
******************************************************************************/
/**
* \addtogroup 0x6094 0x6094 | Velocity_encoder_factor_0
* @{
* \brief Object 0x6094 (Velocity_encoder_factor_0) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Velocity_numerator<br>
* SubIndex 2 - Velocity_divisor<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x6094[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE }, /* Subindex1 - Velocity_numerator */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE }}; /* Subindex2 - Velocity_divisor */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x6094[] = "Velocity_encoder_factor_0\000"
"Velocity_numerator\000"
"Velocity_divisor\000\377";
#endif //#ifdef _OBJD_

#ifndef _MY_APPLICATION_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 Velocity_numerator; /* Subindex1 - Velocity_numerator */
UINT32 Velocity_divisor; /* Subindex2 - Velocity_divisor */
} OBJ_STRUCT_PACKED_END
TOBJ6094;
#endif //#ifndef _MY_APPLICATION_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ6094 Velocity_encoder_factor_00x6094
#if defined(_MY_APPLICATION_) && (_MY_APPLICATION_ == 1)
={2,0,0}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x6097 : Acceleration_factor_0
******************************************************************************/
/**
* \addtogroup 0x6097 0x6097 | Acceleration_factor_0
* @{
* \brief Object 0x6097 (Acceleration_factor_0) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Acceleration_numerator<br>
* SubIndex 2 - Acceleration_divisor<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x6097[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE }, /* Subindex1 - Acceleration_numerator */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE }}; /* Subindex2 - Acceleration_divisor */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x6097[] = "Acceleration_factor_0\000"
"Acceleration_numerator\000"
"Acceleration_divisor\000\377";
#endif //#ifdef _OBJD_

#ifndef _MY_APPLICATION_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 Acceleration_numerator; /* Subindex1 - Acceleration_numerator */
UINT32 Acceleration_divisor; /* Subindex2 - Acceleration_divisor */
} OBJ_STRUCT_PACKED_END
TOBJ6097;
#endif //#ifndef _MY_APPLICATION_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ6097 Acceleration_factor_00x6097
#if defined(_MY_APPLICATION_) && (_MY_APPLICATION_ == 1)
={2,0,0}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x6098 : Homing_method_0
******************************************************************************/
/**
* \addtogroup 0x6098 0x6098 | Homing_method_0
* @{
* \brief Object 0x6098 (Homing_method_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6098 = { DEFTYPE_INTEGER8 , 0x8 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x6098[] = "Homing_method_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT8 Homing_method_00x6098;
/** @}*/



/******************************************************************************
*                    Object 0x6099 : Homing_speeds_0
******************************************************************************/
/**
* \addtogroup 0x6099 0x6099 | Homing_speeds_0
* @{
* \brief Object 0x6099 (Homing_speeds_0) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Speed_during_search_for_switch<br>
* SubIndex 2 - Speed_during_search_for_zero<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x6099[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE }, /* Subindex1 - Speed_during_search_for_switch */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE }}; /* Subindex2 - Speed_during_search_for_zero */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x6099[] = "Homing_speeds_0\000"
"Speed_during_search_for_switch\000"
"Speed_during_search_for_zero\000\377";
#endif //#ifdef _OBJD_

#ifndef _MY_APPLICATION_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 Speed_during_search_for_switch; /* Subindex1 - Speed_during_search_for_switch */
UINT32 Speed_during_search_for_zero; /* Subindex2 - Speed_during_search_for_zero */
} OBJ_STRUCT_PACKED_END
TOBJ6099;
#endif //#ifndef _MY_APPLICATION_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ6099 Homing_speeds_00x6099
#if defined(_MY_APPLICATION_) && (_MY_APPLICATION_ == 1)
={2,0,0}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x609A : Homing_acceleration_0
******************************************************************************/
/**
* \addtogroup 0x609A 0x609A | Homing_acceleration_0
* @{
* \brief Object 0x609A (Homing_acceleration_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x609A = { DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x609A[] = "Homing_acceleration_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO UINT32 Homing_acceleration_00x609A;
/** @}*/



/******************************************************************************
*                    Object 0x60A4 : Profile_jerk_0
******************************************************************************/
/**
* \addtogroup 0x60A4 0x60A4 | Profile_jerk_0
* @{
* \brief Object 0x60A4 (Profile_jerk_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry descriptions<br>
* 
* Subindex 0<br>
* Subindex 1 - n (the same entry description is used)<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x60A4[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE }};

/**
* \brief Object name definition<br>
* For Subindex 1 to n the syntax 'Subindex XXX' is used
*/
OBJCONST UCHAR OBJMEM aName0x60A4[] = "Profile_jerk_0\000\377";
#endif //#ifdef _OBJD_

#ifndef _MY_APPLICATION_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16   u16SubIndex0;  /**< \brief Subindex 0 */
UINT32 aEntries[1];  /**< \brief Subindex 1 - 1 */
} OBJ_STRUCT_PACKED_END
TOBJ60A4;
#endif //#ifndef _MY_APPLICATION_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ60A4 Profile_jerk_00x60A4
#if defined(_MY_APPLICATION_) && (_MY_APPLICATION_ == 1)
={1,{0}}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x60B1 : Velocity_offset_0
******************************************************************************/
/**
* \addtogroup 0x60B1 0x60B1 | Velocity_offset_0
* @{
* \brief Object 0x60B1 (Velocity_offset_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x60B1 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x60B1[] = "Velocity_offset_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Velocity_offset_00x60B1;
/** @}*/



/******************************************************************************
*                    Object 0x60B2 : Torque_offset_0
******************************************************************************/
/**
* \addtogroup 0x60B2 0x60B2 | Torque_offset_0
* @{
* \brief Object 0x60B2 (Torque_offset_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x60B2 = { DEFTYPE_INTEGER16 , 0x10 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x60B2[] = "Torque_offset_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT16 Torque_offset_00x60B2;
/** @}*/



/******************************************************************************
*                    Object 0x60B8 : Touch_probe_function_0
******************************************************************************/
/**
* \addtogroup 0x60B8 0x60B8 | Touch_probe_function_0
* @{
* \brief Object 0x60B8 (Touch_probe_function_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x60B8 = { DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x60B8[] = "Touch_probe_function_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO UINT16 Touch_probe_function_00x60B8;
/** @}*/



/******************************************************************************
*                    Object 0x60B9 : Touch_probe_status_0
******************************************************************************/
/**
* \addtogroup 0x60B9 0x60B9 | Touch_probe_status_0
* @{
* \brief Object 0x60B9 (Touch_probe_status_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x60B9 = { DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x60B9[] = "Touch_probe_status_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO UINT16 Touch_probe_status_00x60B9;
/** @}*/



/******************************************************************************
*                    Object 0x60BA : Touch_probe_pos1_pos_value_0
******************************************************************************/
/**
* \addtogroup 0x60BA 0x60BA | Touch_probe_pos1_pos_value_0
* @{
* \brief Object 0x60BA (Touch_probe_pos1_pos_value_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x60BA = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x60BA[] = "Touch_probe_pos1_pos_value_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Touch_probe_pos1_pos_value_00x60BA;
/** @}*/



/******************************************************************************
*                    Object 0x60BB : Touch_probe_pos1_neg_value_0
******************************************************************************/
/**
* \addtogroup 0x60BB 0x60BB | Touch_probe_pos1_neg_value_0
* @{
* \brief Object 0x60BB (Touch_probe_pos1_neg_value_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x60BB = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x60BB[] = "Touch_probe_pos1_neg_value_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Touch_probe_pos1_neg_value_00x60BB;
/** @}*/



/******************************************************************************
*                    Object 0x60BC : Touch_probe_pos2_pos_value_0
******************************************************************************/
/**
* \addtogroup 0x60BC 0x60BC | Touch_probe_pos2_pos_value_0
* @{
* \brief Object 0x60BC (Touch_probe_pos2_pos_value_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x60BC = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x60BC[] = "Touch_probe_pos2_pos_value_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Touch_probe_pos2_pos_value_00x60BC;
/** @}*/



/******************************************************************************
*                    Object 0x60BD : Touch_probe_pos2_neg_value_0
******************************************************************************/
/**
* \addtogroup 0x60BD 0x60BD | Touch_probe_pos2_neg_value_0
* @{
* \brief Object 0x60BD (Touch_probe_pos2_neg_value_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x60BD = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x60BD[] = "Touch_probe_pos2_neg_value_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Touch_probe_pos2_neg_value_00x60BD;
/** @}*/



/******************************************************************************
*                    Object 0x60C0 : Interpolation_sub_mode_select_0
******************************************************************************/
/**
* \addtogroup 0x60C0 0x60C0 | Interpolation_sub_mode_select_0
* @{
* \brief Object 0x60C0 (Interpolation_sub_mode_select_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x60C0 = { DEFTYPE_INTEGER16 , 0x10 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x60C0[] = "Interpolation_sub_mode_select_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT16 Interpolation_sub_mode_select_00x60C0;
/** @}*/



/******************************************************************************
*                    Object 0x60C1 : Interpolation_data_record_0
******************************************************************************/
/**
* \addtogroup 0x60C1 0x60C1 | Interpolation_data_record_0
* @{
* \brief Object 0x60C1 (Interpolation_data_record_0) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - _1st_set_point<br>
* SubIndex 2 - _2nd_set_point<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x60C1[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE }, /* Subindex1 - _1st_set_point */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE }}; /* Subindex2 - _2nd_set_point */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x60C1[] = "Interpolation_data_record_0\000"
"_1st_set_point\000"
"_2nd_set_point\000\377";
#endif //#ifdef _OBJD_

#ifndef _MY_APPLICATION_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 _1st_set_point; /* Subindex1 - _1st_set_point */
UINT32 _2nd_set_point; /* Subindex2 - _2nd_set_point */
} OBJ_STRUCT_PACKED_END
TOBJ60C1;
#endif //#ifndef _MY_APPLICATION_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ60C1 Interpolation_data_record_00x60C1
#if defined(_MY_APPLICATION_) && (_MY_APPLICATION_ == 1)
={2,0,0}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x60C2 : Interpolation_time_period_0
******************************************************************************/
/**
* \addtogroup 0x60C2 0x60C2 | Interpolation_time_period_0
* @{
* \brief Object 0x60C2 (Interpolation_time_period_0) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Interpolation_time_unit<br>
* SubIndex 2 - Interpolation_time_index<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x60C2[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READWRITE }, /* Subindex1 - Interpolation_time_unit */
{ DEFTYPE_INTEGER8 , 0x8 , ACCESS_READWRITE }}; /* Subindex2 - Interpolation_time_index */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x60C2[] = "Interpolation_time_period_0\000"
"Interpolation_time_unit\000"
"Interpolation_time_index\000\377";
#endif //#ifdef _OBJD_

#ifndef _MY_APPLICATION_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT8 Interpolation_time_unit; /* Subindex1 - Interpolation_time_unit */
INT8 Interpolation_time_index; /* Subindex2 - Interpolation_time_index */
} OBJ_STRUCT_PACKED_END
TOBJ60C2;
#endif //#ifndef _MY_APPLICATION_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ60C2 Interpolation_time_period_00x60C2
#if defined(_MY_APPLICATION_) && (_MY_APPLICATION_ == 1)
={2,0,0}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x60E0 : Positive_torque_limit_value_0
******************************************************************************/
/**
* \addtogroup 0x60E0 0x60E0 | Positive_torque_limit_value_0
* @{
* \brief Object 0x60E0 (Positive_torque_limit_value_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x60E0 = { DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x60E0[] = "Positive_torque_limit_value_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO UINT16 Positive_torque_limit_value_00x60E0;
/** @}*/



/******************************************************************************
*                    Object 0x60E1 : Negative_torque_limit_value_0
******************************************************************************/
/**
* \addtogroup 0x60E1 0x60E1 | Negative_torque_limit_value_0
* @{
* \brief Object 0x60E1 (Negative_torque_limit_value_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x60E1 = { DEFTYPE_UNSIGNED16 , 0x10 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x60E1[] = "Negative_torque_limit_value_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO UINT16 Negative_torque_limit_value_00x60E1;
/** @}*/



/******************************************************************************
*                    Object 0x60F4 : Following_error_actual_value_0
******************************************************************************/
/**
* \addtogroup 0x60F4 0x60F4 | Following_error_actual_value_0
* @{
* \brief Object 0x60F4 (Following_error_actual_value_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x60F4 = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x60F4[] = "Following_error_actual_value_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Following_error_actual_value_00x60F4;
/** @}*/



/******************************************************************************
*                    Object 0x60FA : Control_effort_0
******************************************************************************/
/**
* \addtogroup 0x60FA 0x60FA | Control_effort_0
* @{
* \brief Object 0x60FA (Control_effort_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x60FA = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x60FA[] = "Control_effort_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Control_effort_00x60FA;
/** @}*/



/******************************************************************************
*                    Object 0x60FC : Position_demand_internal_value_0
******************************************************************************/
/**
* \addtogroup 0x60FC 0x60FC | Position_demand_internal_value_0
* @{
* \brief Object 0x60FC (Position_demand_internal_value_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x60FC = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x60FC[] = "Position_demand_internal_value_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Position_demand_internal_value_00x60FC;
/** @}*/



/******************************************************************************
*                    Object 0x60FD : Digital_inputs_0
******************************************************************************/
/**
* \addtogroup 0x60FD 0x60FD | Digital_inputs_0
* @{
* \brief Object 0x60FD (Digital_inputs_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x60FD = { DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x60FD[] = "Digital_inputs_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO UINT32 Digital_inputs_00x60FD;
/** @}*/



/******************************************************************************
*                    Object 0x60FE : Digital_outputs_0
******************************************************************************/
/**
* \addtogroup 0x60FE 0x60FE | Digital_outputs_0
* @{
* \brief Object 0x60FE (Digital_outputs_0) definition
*/
#ifdef _OBJD_
/**
* \brief Object entry descriptions<br>
* <br>
* SubIndex 0<br>
* SubIndex 1 - Physical_outputs<br>
* SubIndex 2 - Bit_mask<br>
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM asEntryDesc0x60FE[] = {
{ DEFTYPE_UNSIGNED8 , 0x8 , ACCESS_READ },
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE }, /* Subindex1 - Physical_outputs */
{ DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READWRITE }}; /* Subindex2 - Bit_mask */

/**
* \brief Object/Entry names
*/
OBJCONST UCHAR OBJMEM aName0x60FE[] = "Digital_outputs_0\000"
"Physical_outputs\000"
"Bit_mask\000\377";
#endif //#ifdef _OBJD_

#ifndef _MY_APPLICATION_OBJECTS_H_
/**
* \brief Object structure
*/
typedef struct OBJ_STRUCT_PACKED_START {
UINT16 u16SubIndex0;
UINT32 Physical_outputs; /* Subindex1 - Physical_outputs */
UINT32 Bit_mask; /* Subindex2 - Bit_mask */
} OBJ_STRUCT_PACKED_END
TOBJ60FE;
#endif //#ifndef _MY_APPLICATION_OBJECTS_H_

/**
* \brief Object variable
*/
PROTO TOBJ60FE Digital_outputs_00x60FE
#if defined(_MY_APPLICATION_) && (_MY_APPLICATION_ == 1)
={2,0,0}
#endif
;
/** @}*/



/******************************************************************************
*                    Object 0x60FF : Target_velocity_0
******************************************************************************/
/**
* \addtogroup 0x60FF 0x60FF | Target_velocity_0
* @{
* \brief Object 0x60FF (Target_velocity_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x60FF = { DEFTYPE_INTEGER32 , 0x20 , ACCESS_READWRITE };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x60FF[] = "Target_velocity_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO INT32 Target_velocity_00x60FF;
/** @}*/



/******************************************************************************
*                    Object 0x6502 : Supported_drive_modes_0
******************************************************************************/
/**
* \addtogroup 0x6502 0x6502 | Supported_drive_modes_0
* @{
* \brief Object 0x6502 (Supported_drive_modes_0) definition
*/
#ifdef _OBJD_
/**
* \brief Entry description
*/
OBJCONST TSDOINFOENTRYDESC    OBJMEM sEntryDesc0x6502 = { DEFTYPE_UNSIGNED32 , 0x20 , ACCESS_READ };
/**
* \brief Object name
*/
OBJCONST UCHAR OBJMEM aName0x6502[] = "Supported_drive_modes_0\000\377";
#endif //#ifdef _OBJD_

/**
* \brief Object variable
*/
PROTO UINT32 Supported_drive_modes_00x6502;
/** @}*/







#ifdef _OBJD_
TOBJECT    OBJMEM ApplicationObjDic[] = {
/* Object 0x1600 */
{NULL , NULL ,  0x1600 , {DEFTYPE_PDOMAPPING , 4 | (OBJCODE_REC << 8)} , asEntryDesc0x1600 , aName0x1600 , &ReceivePDOMapping1Axis00x1600, NULL , NULL , 0x0000 },
/* Object 0x1601 */
{NULL , NULL ,  0x1601 , {DEFTYPE_PDOMAPPING , 7 | (OBJCODE_REC << 8)} , asEntryDesc0x1601 , aName0x1601 , &ReceivePDOMapping2Axis00x1601, NULL , NULL , 0x0000 },
/* Object 0x1602 */
{NULL , NULL ,  0x1602 , {DEFTYPE_PDOMAPPING , 6 | (OBJCODE_REC << 8)} , asEntryDesc0x1602 , aName0x1602 , &ReceivePDOMapping3Axis00x1602, NULL , NULL , 0x0000 },
/* Object 0x1603 */
{NULL , NULL ,  0x1603 , {DEFTYPE_PDOMAPPING , 8 | (OBJCODE_REC << 8)} , asEntryDesc0x1603 , aName0x1603 , &ReceivePDOMapping4Axis00x1603, NULL , NULL , 0x0000 },
/* Object 0x1A00 */
{NULL , NULL ,  0x1A00 , {DEFTYPE_PDOMAPPING , 8 | (OBJCODE_REC << 8)} , asEntryDesc0x1A00 , aName0x1A00 , &TransmitPDOMapping1Axis00x1A00, NULL , NULL , 0x0000 },
/* Object 0x1A01 */
{NULL , NULL ,  0x1A01 , {DEFTYPE_PDOMAPPING , 9 | (OBJCODE_REC << 8)} , asEntryDesc0x1A01 , aName0x1A01 , &TransmitPDOMapping2Axis00x1A01, NULL , NULL , 0x0000 },
/* Object 0x1C12 */
{NULL , NULL ,  0x1C12 , {DEFTYPE_UNSIGNED16 , 4 | (OBJCODE_ARR << 8)} , asEntryDesc0x1C12 , aName0x1C12 , &sRxPDOassign, NULL , NULL , 0x0000 },
/* Object 0x1C13 */
{NULL , NULL ,  0x1C13 , {DEFTYPE_UNSIGNED16 , 2 | (OBJCODE_ARR << 8)} , asEntryDesc0x1C13 , aName0x1C13 , &sTxPDOassign, NULL , NULL , 0x0000 },
/* Object 0x30A5 */
{NULL , NULL ,  0x30A5 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x30A5 , aName0x30A5 , &Axis0_SinglePos0x30A5 , NULL , NULL , 0x0000 },
/* Object 0x30A6 */
{NULL , NULL ,  0x30A6 , {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x30A6 , aName0x30A6 , &Axis0_MultiPos0x30A6 , NULL , NULL , 0x0000 },
/* Object 0x30A9 */
{NULL , NULL ,  0x30A9 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x30A9 , aName0x30A9 , &Axis0_Actual_User_Rotates0x30A9 , NULL , NULL , 0x0000 },
/* Object 0x30AA */
{NULL , NULL ,  0x30AA , {DEFTYPE_RECORD , 2 | (OBJCODE_REC << 8)} , asEntryDesc0x30AA , aName0x30AA , &Axis0_Actual_User_Position0x30AA, NULL , NULL , 0x0000 },
/* Object 0x30B0 */
{NULL , NULL ,  0x30B0 , {DEFTYPE_UNSIGNED16 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x30B0 , aName0x30B0 , &Axis0_PSO_Function0x30B0 , NULL , NULL , 0x0000 },
/* Object 0x30B1 */
{NULL , NULL ,  0x30B1 , {DEFTYPE_INTEGER16 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x30B1 , aName0x30B1 , &Axis0_PSO_Adjustment_Position0x30B1 , NULL , NULL , 0x0000 },
/* Object 0x30C0 */
{NULL , NULL ,  0x30C0 , {DEFTYPE_UNSIGNED16 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x30C0 , aName0x30C0 , &Axis0_PSO_State0x30C0 , NULL , NULL , 0x0000 },
/* Object 0x30C1 */
{NULL , NULL ,  0x30C1 , {DEFTYPE_UNSIGNED16 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x30C1 , aName0x30C1 , &Axis0_PSO_Current_ComparePoint0x30C1 , NULL , NULL , 0x0000 },
/* Object 0x30C2 */
{NULL , NULL ,  0x30C2 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x30C2 , aName0x30C2 , &Axis0_PSO_Current_Position0x30C2 , NULL , NULL , 0x0000 },
/* Object 0x3164 */
{NULL , NULL ,  0x3164 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3164 , aName0x3164 , &Axis0_Pn000_Basic_Function_Selections_00x3164 , NULL , NULL , 0x0000 },
/* Object 0x3165 */
{NULL , NULL ,  0x3165 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3165 , aName0x3165 , &Axis0_Pn001_Basic_Function_Selections_10x3165 , NULL , NULL , 0x0000 },
/* Object 0x3166 */
{NULL , NULL ,  0x3166 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3166 , aName0x3166 , &Axis0_Pn002_Application_Function_Selections_20x3166 , NULL , NULL , 0x0000 },
/* Object 0x3167 */
{NULL , NULL ,  0x3167 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3167 , aName0x3167 , &Axis0_Pn003_Application_Function_Selections_30x3167 , NULL , NULL , 0x0000 },
/* Object 0x3168 */
{NULL , NULL ,  0x3168 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3168 , aName0x3168 , &Axis0_Pn004_Application_Function_Selections_40x3168 , NULL , NULL , 0x0000 },
/* Object 0x3169 */
{NULL , NULL ,  0x3169 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3169 , aName0x3169 , &Axis0_Pn005_Application_Function_Selections_50x3169 , NULL , NULL , 0x0000 },
/* Object 0x316A */
{NULL , NULL ,  0x316A , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x316A , aName0x316A , &Axis0_Pn006_Application_Function_Selections_60x316A , NULL , NULL , 0x0000 },
/* Object 0x316B */
{NULL , NULL ,  0x316B , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x316B , aName0x316B , &Axis0_Pn007_Application_Function_Selections_70x316B , NULL , NULL , 0x0000 },
/* Object 0x316C */
{NULL , NULL ,  0x316C , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x316C , aName0x316C , &Axis0_Pn008_Power_On_Options0x316C , NULL , NULL , 0x0000 },
/* Object 0x31C8 */
{NULL , NULL ,  0x31C8 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31C8 , aName0x31C8 , &Axis0_Pn100_Tuning_Function_Selection0x31C8 , NULL , NULL , 0x0000 },
/* Object 0x31C9 */
{NULL , NULL ,  0x31C9 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31C9 , aName0x31C9 , &Axis0_Pn101_Response_Frequency_Level0x31C9 , NULL , NULL , 0x0000 },
/* Object 0x31CA */
{NULL , NULL ,  0x31CA , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31CA , aName0x31CA , &Axis0_Pn102_Speed_Loop_Gain0x31CA , NULL , NULL , 0x0000 },
/* Object 0x31CB */
{NULL , NULL ,  0x31CB , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31CB , aName0x31CB , &Axis0_Pn103_Speed_Loop_Integral_Time0x31CB , NULL , NULL , 0x0000 },
/* Object 0x31CC */
{NULL , NULL ,  0x31CC , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31CC , aName0x31CC , &Axis0_Pn104_Position_Loop_Gain0x31CC , NULL , NULL , 0x0000 },
/* Object 0x31CD */
{NULL , NULL ,  0x31CD , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31CD , aName0x31CD , &Axis0_Pn105_Torque_Reference_Filter_Time_Constant0x31CD , NULL , NULL , 0x0000 },
/* Object 0x31CE */
{NULL , NULL ,  0x31CE , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31CE , aName0x31CE , &Axis0_Pn106_Load_Inertia_Percentage0x31CE , NULL , NULL , 0x0000 },
/* Object 0x31CF */
{NULL , NULL ,  0x31CF , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31CF , aName0x31CF , &Axis0_Pn107_Second_Speed_Loop_Gain0x31CF , NULL , NULL , 0x0000 },
/* Object 0x31D0 */
{NULL , NULL ,  0x31D0 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31D0 , aName0x31D0 , &Axis0_Pn108_Second_Speed_Loop_Integral_Time0x31D0 , NULL , NULL , 0x0000 },
/* Object 0x31D1 */
{NULL , NULL ,  0x31D1 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31D1 , aName0x31D1 , &Axis0_Pn109_Second_Position_Loop_Gain0x31D1 , NULL , NULL , 0x0000 },
/* Object 0x31D2 */
{NULL , NULL ,  0x31D2 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31D2 , aName0x31D2 , &Axis0_Pn110_Second_Torque_Reference_Filter_Time_Constant0x31D2 , NULL , NULL , 0x0000 },
/* Object 0x31D4 */
{NULL , NULL ,  0x31D4 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31D4 , aName0x31D4 , &Axis0_Pn112_Speed_Feedforward0x31D4 , NULL , NULL , 0x0000 },
/* Object 0x31D5 */
{NULL , NULL ,  0x31D5 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31D5 , aName0x31D5 , &Axis0_Pn113_Speed_Feedforward_Filter_Time_Constant0x31D5 , NULL , NULL , 0x0000 },
/* Object 0x31D6 */
{NULL , NULL ,  0x31D6 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31D6 , aName0x31D6 , &Axis0_Pn114_Torque_Feedforward0x31D6 , NULL , NULL , 0x0000 },
/* Object 0x31D7 */
{NULL , NULL ,  0x31D7 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31D7 , aName0x31D7 , &Axis0_Pn115_Torque_Feedforward_Filter_Time_Constant0x31D7 , NULL , NULL , 0x0000 },
/* Object 0x31D8 */
{NULL , NULL ,  0x31D8 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31D8 , aName0x31D8 , &Axis0_Pn116_P_PI_Switching_Conditions0x31D8 , NULL , NULL , 0x0000 },
/* Object 0x31D9 */
{NULL , NULL ,  0x31D9 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31D9 , aName0x31D9 , &Axis0_Pn117_P_PI_Switching_Level_for_Torque_Reference0x31D9 , NULL , NULL , 0x0000 },
/* Object 0x31DA */
{NULL , NULL ,  0x31DA , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31DA , aName0x31DA , &Axis0_Pn118_P_PI_Switching_Level_for_Position_Deviation0x31DA , NULL , NULL , 0x0000 },
/* Object 0x31DB */
{NULL , NULL ,  0x31DB , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31DB , aName0x31DB , &Axis0_Pn119_P_PI_Switching_Level_for_Acceleration0x31DB , NULL , NULL , 0x0000 },
/* Object 0x31DC */
{NULL , NULL ,  0x31DC , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31DC , aName0x31DC , &Axis0_Pn120_P_PI_Switching_Level_for_Speed_Reference0x31DC , NULL , NULL , 0x0000 },
/* Object 0x31DD */
{NULL , NULL ,  0x31DD , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31DD , aName0x31DD , &Axis0_Pn121_Gain_Switching_Conditions0x31DD , NULL , NULL , 0x0000 },
/* Object 0x31DE */
{NULL , NULL ,  0x31DE , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31DE , aName0x31DE , &Axis0_Pn122_Gain_Switching_Waiting_Time0x31DE , NULL , NULL , 0x0000 },
/* Object 0x31DF */
{NULL , NULL ,  0x31DF , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31DF , aName0x31DF , &Axis0_Pn123_Gain_Switching_Level0x31DF , NULL , NULL , 0x0000 },
/* Object 0x31E0 */
{NULL , NULL ,  0x31E0 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31E0 , aName0x31E0 , &Axis0_Pn124_Speed_Level0x31E0 , NULL , NULL , 0x0000 },
/* Object 0x31E1 */
{NULL , NULL ,  0x31E1 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31E1 , aName0x31E1 , &Axis0_Pn125_Position_Gain_Switching_Time0x31E1 , NULL , NULL , 0x0000 },
/* Object 0x31E2 */
{NULL , NULL ,  0x31E2 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31E2 , aName0x31E2 , &Axis0_Pn126_Gain_Switching_Hysteresis0x31E2 , NULL , NULL , 0x0000 },
/* Object 0x31E3 */
{NULL , NULL ,  0x31E3 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31E3 , aName0x31E3 , &Axis0_Pn127_Speed_Measurement_Filter_at_Low_Speed0x31E3 , NULL , NULL , 0x0000 },
/* Object 0x31E6 */
{NULL , NULL ,  0x31E6 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31E6 , aName0x31E6 , &Axis0_Pn130_Friction_Compensation_Gain0x31E6 , NULL , NULL , 0x0000 },
/* Object 0x31E7 */
{NULL , NULL ,  0x31E7 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31E7 , aName0x31E7 , &Axis0_Pn131_Friction_Compensation_Speed_Hysteresis0x31E7 , NULL , NULL , 0x0000 },
/* Object 0x31E8 */
{NULL , NULL ,  0x31E8 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31E8 , aName0x31E8 , &Axis0_Pn132_Friction_Damping_Proportion0x31E8 , NULL , NULL , 0x0000 },
/* Object 0x31EB */
{NULL , NULL ,  0x31EB , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31EB , aName0x31EB , &Axis0_Pn135_Speed_Feedback_Filter_Time0x31EB , NULL , NULL , 0x0000 },
/* Object 0x31FA */
{NULL , NULL ,  0x31FA , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31FA , aName0x31FA , &Axis0_Pn150_Control_Related_Selections0x31FA , NULL , NULL , 0x0000 },
/* Object 0x31FB */
{NULL , NULL ,  0x31FB , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31FB , aName0x31FB , &Axis0_Pn151_Model_Following_Control_Gain0x31FB , NULL , NULL , 0x0000 },
/* Object 0x31FC */
{NULL , NULL ,  0x31FC , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31FC , aName0x31FC , &Axis0_Pn152_Model_Following_Control_Gain_Correction0x31FC , NULL , NULL , 0x0000 },
/* Object 0x31FD */
{NULL , NULL ,  0x31FD , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31FD , aName0x31FD , &Axis0_Pn153_Model_Following_Control_Speed_Feedforward_Coefficient0x31FD , NULL , NULL , 0x0000 },
/* Object 0x31FE */
{NULL , NULL ,  0x31FE , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31FE , aName0x31FE , &Axis0_Pn154_Model_Following_Control_Torque_Feedforward_Coefficient0x31FE , NULL , NULL , 0x0000 },
/* Object 0x31FF */
{NULL , NULL ,  0x31FF , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x31FF , aName0x31FF , &Axis0_Pn155_Anti_Resonance_Frequency_for_Jitter_Suppression0x31FF , NULL , NULL , 0x0000 },
/* Object 0x3200 */
{NULL , NULL ,  0x3200 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3200 , aName0x3200 , &Axis0_Pn156_Filter_Time_Constant_for_Jitter_Suppression0x3200 , NULL , NULL , 0x0000 },
/* Object 0x3201 */
{NULL , NULL ,  0x3201 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3201 , aName0x3201 , &Axis0_Pn157_Low_frequency_jitter_suppression_speed_feedforward_compensation_amount_limiting0x3201 , NULL , NULL , 0x0000 },
/* Object 0x3204 */
{NULL , NULL ,  0x3204 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3204 , aName0x3204 , &Axis0_Pn160_Load_Disturbance_Compensation0x3204 , NULL , NULL , 0x0000 },
/* Object 0x3205 */
{NULL , NULL ,  0x3205 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3205 , aName0x3205 , &Axis0_Pn161_Load_Disturbance_Detection_Gain0x3205 , NULL , NULL , 0x0000 },
/* Object 0x3208 */
{NULL , NULL ,  0x3208 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3208 , aName0x3208 , &Axis0_Pn164_PJOG0_Rotation_Number0x3208 , NULL , NULL , 0x0000 },
/* Object 0x3209 */
{NULL , NULL ,  0x3209 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3209 , aName0x3209 , &Axis0_Pn165_PJOG0_Rotation_Speed0x3209 , NULL , NULL , 0x0000 },
/* Object 0x320A */
{NULL , NULL ,  0x320A , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x320A , aName0x320A , &Axis0_Pn166_PJOG0_Acceleration_Deceleration_Time0x320A , NULL , NULL , 0x0000 },
/* Object 0x320B */
{NULL , NULL ,  0x320B , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x320B , aName0x320B , &Axis0_Pn167_PJOG0_Stop_Time0x320B , NULL , NULL , 0x0000 },
/* Object 0x320C */
{NULL , NULL ,  0x320C , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x320C , aName0x320C , &Axis0_Pn168_PJOG1_Rotation_Number0x320C , NULL , NULL , 0x0000 },
/* Object 0x320D */
{NULL , NULL ,  0x320D , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x320D , aName0x320D , &Axis0_Pn169_PJOG1_Rotation_Speed0x320D , NULL , NULL , 0x0000 },
/* Object 0x320E */
{NULL , NULL ,  0x320E , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x320E , aName0x320E , &Axis0_Pn170_PJOG1_Acceleration_Deceleration_Time0x320E , NULL , NULL , 0x0000 },
/* Object 0x320F */
{NULL , NULL ,  0x320F , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x320F , aName0x320F , &Axis0_Pn171_PJOG1_Stop_Time0x320F , NULL , NULL , 0x0000 },
/* Object 0x3210 */
{NULL , NULL ,  0x3210 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3210 , aName0x3210 , &Axis0_Pn172_Moment_of_Inertia_Calculation_Amount0x3210 , NULL , NULL , 0x0000 },
/* Object 0x3211 */
{NULL , NULL ,  0x3211 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3211 , aName0x3211 , &Axis0_Pn173_Vibration_Suppression_Frequency_at_Intermediate_Frequency0x3211 , NULL , NULL , 0x0000 },
/* Object 0x3212 */
{NULL , NULL ,  0x3212 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3212 , aName0x3212 , &Axis0_Pn174_Vibration_Suppression_Bandwidth_Adjustment_at_Intermediate_Frequency0x3212 , NULL , NULL , 0x0000 },
/* Object 0x3213 */
{NULL , NULL ,  0x3213 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3213 , aName0x3213 , &Axis0_Pn175_Vibration_Suppression_Damping_Gain_at_Intermediate_Frequency0x3213 , NULL , NULL , 0x0000 },
/* Object 0x3214 */
{NULL , NULL ,  0x3214 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3214 , aName0x3214 , &Axis0_Pn176_Vibration_Suppression_Lowpass_Filter_Time_at_Intermediate_Frequency0x3214 , NULL , NULL , 0x0000 },
/* Object 0x3215 */
{NULL , NULL ,  0x3215 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3215 , aName0x3215 , &Axis0_Pn177_Vibration_Suppression_Highpass_Filter_Time_at_Intermediate_Frequency0x3215 , NULL , NULL , 0x0000 },
/* Object 0x3216 */
{NULL , NULL ,  0x3216 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3216 , aName0x3216 , &Axis0_Pn178_Vibration_Suppression_Proportional_Attenuation_Gain_at_Intermediate_Frequency0x3216 , NULL , NULL , 0x0000 },
/* Object 0x3217 */
{NULL , NULL ,  0x3217 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3217 , aName0x3217 , &Axis0_Pn179_Vibration_Amplitude_Detection_Level0x3217 , NULL , NULL , 0x0000 },
/* Object 0x3218 */
{NULL , NULL ,  0x3218 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3218 , aName0x3218 , &Axis0_Pn180_Vibration_Frequency_Detection_Level0x3218 , NULL , NULL , 0x0000 },
/* Object 0x3219 */
{NULL , NULL ,  0x3219 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3219 , aName0x3219 , &Axis0_Pn181_Notch_Filter_Frequency_10x3219 , NULL , NULL , 0x0000 },
/* Object 0x321A */
{NULL , NULL ,  0x321A , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x321A , aName0x321A , &Axis0_Pn182_Notch_Filter_Depth_10x321A , NULL , NULL , 0x0000 },
/* Object 0x321B */
{NULL , NULL ,  0x321B , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x321B , aName0x321B , &Axis0_Pn183_Notch_Filter_Width_10x321B , NULL , NULL , 0x0000 },
/* Object 0x321C */
{NULL , NULL ,  0x321C , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x321C , aName0x321C , &Axis0_Pn184_Notch_Filter_Frequency_20x321C , NULL , NULL , 0x0000 },
/* Object 0x321D */
{NULL , NULL ,  0x321D , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x321D , aName0x321D , &Axis0_Pn185_Notch_Filter_Depth_20x321D , NULL , NULL , 0x0000 },
/* Object 0x321E */
{NULL , NULL ,  0x321E , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x321E , aName0x321E , &Axis0_Pn186_Notch_Filter_Width_20x321E , NULL , NULL , 0x0000 },
/* Object 0x321F */
{NULL , NULL ,  0x321F , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x321F , aName0x321F , &Axis0_Pn187_Notch_Filter_Frequency_30x321F , NULL , NULL , 0x0000 },
/* Object 0x3220 */
{NULL , NULL ,  0x3220 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3220 , aName0x3220 , &Axis0_Pn188_Notch_Filter_Depth_30x3220 , NULL , NULL , 0x0000 },
/* Object 0x3221 */
{NULL , NULL ,  0x3221 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3221 , aName0x3221 , &Axis0_Pn189_Notch_Filter_Width_30x3221 , NULL , NULL , 0x0000 },
/* Object 0x3222 */
{NULL , NULL ,  0x3222 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3222 , aName0x3222 , &Axis0_Pn190_Automatic_Vibration_Suppression_State0x3222 , NULL , NULL , 0x0000 },
/* Object 0x3223 */
{NULL , NULL ,  0x3223 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3223 , aName0x3223 , &Axis0_Pn191_Vibration_Frequency_Detection_Level0x3223 , NULL , NULL , 0x0000 },
/* Object 0x322C */
{NULL , NULL ,  0x322C , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x322C , aName0x322C , &Axis0_Pn200_Pulse_Numbers_for_PG_Frequency_Division0x322C , NULL , NULL , 0x0000 },
/* Object 0x3236 */
{NULL , NULL ,  0x3236 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3236 , aName0x3236 , &Axis0_Pn210_2nd_Encoder_Functions_10x3236 , NULL , NULL , 0x0000 },
/* Object 0x3237 */
{NULL , NULL ,  0x3237 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3237 , aName0x3237 , &Axis0_Pn211_2nd_Encoder_Functions_20x3237 , NULL , NULL , 0x0000 },
/* Object 0x3238 */
{NULL , NULL ,  0x3238 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3238 , aName0x3238 , &Axis0_Pn212_2nd_Encoder_Resolution0x3238 , NULL , NULL , 0x0000 },
/* Object 0x3239 */
{NULL , NULL ,  0x3239 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3239 , aName0x3239 , &Axis0_Pn213_Position_Deviation_Overflow_Warning_Level_at_Fully_Closed_loop_Control0x3239 , NULL , NULL , 0x0000 },
/* Object 0x323A */
{NULL , NULL ,  0x323A , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x323A , aName0x323A , &Axis0_Pn214_Position_Deviation_Reset_Level_at_Fully_Closed_loop_Control0x323A , NULL , NULL , 0x0000 },
/* Object 0x3245 */
{NULL , NULL ,  0x3245 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3245 , aName0x3245 , &Axis0_Pn225_Encoder_delay_compensation_mode0x3245 , NULL , NULL , 0x0000 },
/* Object 0x3246 */
{NULL , NULL ,  0x3246 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3246 , aName0x3246 , &Axis0_Pn226_Encoder_delay_manual_compensation_value0x3246 , NULL , NULL , 0x0000 },
/* Object 0x3247 */
{NULL , NULL ,  0x3247 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3247 , aName0x3247 , &Axis0_Pn227_User_Define_Multi_rotate_Function_Switch0x3247 , NULL , NULL , 0x0000 },
/* Object 0x3248 */
{NULL , NULL ,  0x3248 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3248 , aName0x3248 , &Axis0_Pn228_User_Defined_Multi_Resolution0x3248 , NULL , NULL , 0x0000 },
/* Object 0x3294 */
{NULL , NULL ,  0x3294 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3294 , aName0x3294 , &Axis0_Pn304_Parameter_Reference_Speed0x3294 , NULL , NULL , 0x0000 },
/* Object 0x3295 */
{NULL , NULL ,  0x3295 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3295 , aName0x3295 , &Axis0_Pn305_JOG_Speed0x3295 , NULL , NULL , 0x0000 },
/* Object 0x3296 */
{NULL , NULL ,  0x3296 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3296 , aName0x3296 , &Axis0_Pn306_Soft_Start_Acceleration_Time0x3296 , NULL , NULL , 0x0000 },
/* Object 0x3297 */
{NULL , NULL ,  0x3297 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3297 , aName0x3297 , &Axis0_Pn307_Soft_Start_Deceleration_Time0x3297 , NULL , NULL , 0x0000 },
/* Object 0x3298 */
{NULL , NULL ,  0x3298 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3298 , aName0x3298 , &Axis0_Pn308_Speed_Feedback_Filter_Time_Constant0x3298 , NULL , NULL , 0x0000 },
/* Object 0x3299 */
{NULL , NULL ,  0x3299 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3299 , aName0x3299 , &Axis0_Pn309_S_Curve_Rise_Time0x3299 , NULL , NULL , 0x0000 },
/* Object 0x329A */
{NULL , NULL ,  0x329A , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x329A , aName0x329A , &Axis0_Pn310_Speed_Reference_Curve_Form0x329A , NULL , NULL , 0x0000 },
/* Object 0x329B */
{NULL , NULL ,  0x329B , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x329B , aName0x329B , &Axis0_Pn311_S_Curve_Selection0x329B , NULL , NULL , 0x0000 },
/* Object 0x32A7 */
{NULL , NULL ,  0x32A7 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x32A7 , aName0x32A7 , &Axis0_Pn323_Overspeed_Detection_Level0x32A7 , NULL , NULL , 0x0000 },
/* Object 0x32AF */
{NULL , NULL ,  0x32AF , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x32AF , aName0x32AF , &Axis0_Pn331_Touch_Probe_Signal_Allocation0x32AF , NULL , NULL , 0x0000 },
/* Object 0x32F5 */
{NULL , NULL ,  0x32F5 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x32F5 , aName0x32F5 , &Axis0_Pn401_Forward_Internal_Torque_Limit0x32F5 , NULL , NULL , 0x0000 },
/* Object 0x32F6 */
{NULL , NULL ,  0x32F6 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x32F6 , aName0x32F6 , &Axis0_Pn402_Reverse_Internal_Torque_Limit0x32F6 , NULL , NULL , 0x0000 },
/* Object 0x32F7 */
{NULL , NULL ,  0x32F7 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x32F7 , aName0x32F7 , &Axis0_Pn403_Forward_External_Torque_Limit0x32F7 , NULL , NULL , 0x0000 },
/* Object 0x32F8 */
{NULL , NULL ,  0x32F8 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x32F8 , aName0x32F8 , &Axis0_Pn404_Reverse_External_Torque_Limit0x32F8 , NULL , NULL , 0x0000 },
/* Object 0x32F9 */
{NULL , NULL ,  0x32F9 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x32F9 , aName0x32F9 , &Axis0_Pn405_Reverse_Brake_Torque_Limit0x32F9 , NULL , NULL , 0x0000 },
/* Object 0x32FA */
{NULL , NULL ,  0x32FA , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x32FA , aName0x32FA , &Axis0_Pn406_Torque_Limit_at_Undervoltage0x32FA , NULL , NULL , 0x0000 },
/* Object 0x32FB */
{NULL , NULL ,  0x32FB , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x32FB , aName0x32FB , &Axis0_Pn407_Release_Time_for_Torque_Limit_at_Undervoltage0x32FB , NULL , NULL , 0x0000 },
/* Object 0x32FC */
{NULL , NULL ,  0x32FC , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x32FC , aName0x32FC , &Axis0_Pn408_Speed_Limit_during_Torque_Control0x32FC , NULL , NULL , 0x0000 },
/* Object 0x3358 */
{NULL , NULL ,  0x3358 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3358 , aName0x3358 , &Axis0_Pn500_Positioning_Completed_Width0x3358 , NULL , NULL , 0x0000 },
/* Object 0x3359 */
{NULL , NULL ,  0x3359 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3359 , aName0x3359 , &Axis0_Pn501_Speed_Coincidence_Signal_Detection_Width0x3359 , NULL , NULL , 0x0000 },
/* Object 0x335B */
{NULL , NULL ,  0x335B , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x335B , aName0x335B , &Axis0_Pn503_Rotation_Detection_Speed0x335B , NULL , NULL , 0x0000 },
/* Object 0x335C */
{NULL , NULL ,  0x335C , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x335C , aName0x335C , &Axis0_Pn504_Deviation_Counter_Overflow_Alarm0x335C , NULL , NULL , 0x0000 },
/* Object 0x335D */
{NULL , NULL ,  0x335D , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x335D , aName0x335D , &Axis0_Pn505_Servo_ON_Waiting_Time0x335D , NULL , NULL , 0x0000 },
/* Object 0x335E */
{NULL , NULL ,  0x335E , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x335E , aName0x335E , &Axis0_Pn506_Brake_Reference_Servo_OFF_Delay_Time0x335E , NULL , NULL , 0x0000 },
/* Object 0x335F */
{NULL , NULL ,  0x335F , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x335F , aName0x335F , &Axis0_Pn507_Brake_Reference_Waiting_Speed0x335F , NULL , NULL , 0x0000 },
/* Object 0x3360 */
{NULL , NULL ,  0x3360 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3360 , aName0x3360 , &Axis0_Pn508_Brake_Reference_Waiting_Time0x3360 , NULL , NULL , 0x0000 },
/* Object 0x3361 */
{NULL , NULL ,  0x3361 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3361 , aName0x3361 , &Axis0_Pn509_Input_Signal_Allocations_10x3361 , NULL , NULL , 0x0000 },
/* Object 0x3362 */
{NULL , NULL ,  0x3362 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3362 , aName0x3362 , &Axis0_Pn510_Input_Signal_Allocations_20x3362 , NULL , NULL , 0x0000 },
/* Object 0x3363 */
{NULL , NULL ,  0x3363 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3363 , aName0x3363 , &Axis0_Pn511_Output_Signal_Allocations0x3363 , NULL , NULL , 0x0000 },
/* Object 0x3364 */
{NULL , NULL ,  0x3364 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3364 , aName0x3364 , &Axis0_Pn512_Input_Contact_Data_Low_Bits_at_Bus_Control0x3364 , NULL , NULL , 0x0000 },
/* Object 0x3365 */
{NULL , NULL ,  0x3365 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3365 , aName0x3365 , &Axis0_Pn513_Input_Contact_Data_High_Bit_at_Bus_Control0x3365 , NULL , NULL , 0x0000 },
/* Object 0x3366 */
{NULL , NULL ,  0x3366 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3366 , aName0x3366 , &Axis0_Pn514_Input_Signals_Filter_Time0x3366 , NULL , NULL , 0x0000 },
/* Object 0x3367 */
{NULL , NULL ,  0x3367 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3367 , aName0x3367 , &Axis0_Pn515_Alarm_Signals_Filter_Time0x3367 , NULL , NULL , 0x0000 },
/* Object 0x3368 */
{NULL , NULL ,  0x3368 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3368 , aName0x3368 , &Axis0_Pn516_Input_Singal_Inverts_10x3368 , NULL , NULL , 0x0000 },
/* Object 0x3369 */
{NULL , NULL ,  0x3369 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3369 , aName0x3369 , &Axis0_Pn517_Input_Singal_Inverts_20x3369 , NULL , NULL , 0x0000 },
/* Object 0x336A */
{NULL , NULL ,  0x336A , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x336A , aName0x336A , &Axis0_Pn518_Dynamic_Brake_Time0x336A , NULL , NULL , 0x0000 },
/* Object 0x336B */
{NULL , NULL ,  0x336B , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x336B , aName0x336B , &Axis0_Pn519_Serial_Encoder_Error_Allowed_Time0x336B , NULL , NULL , 0x0000 },
/* Object 0x336C */
{NULL , NULL ,  0x336C , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x336C , aName0x336C , &Axis0_Pn520_Positioning_Completion_Time0x336C , NULL , NULL , 0x0000 },
/* Object 0x336D */
{NULL , NULL ,  0x336D , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x336D , aName0x336D , &Axis0_Pn521_Alarm_Masks_10x336D , NULL , NULL , 0x0000 },
/* Object 0x3371 */
{NULL , NULL ,  0x3371 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3371 , aName0x3371 , &Axis0_Pn525_Overload_Alarm_Level0x3371 , NULL , NULL , 0x0000 },
/* Object 0x3374 */
{NULL , NULL ,  0x3374 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3374 , aName0x3374 , &Axis0_Pn528_Ouput_Signal_Inverts0x3374 , NULL , NULL , 0x0000 },
/* Object 0x3375 */
{NULL , NULL ,  0x3375 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3375 , aName0x3375 , &Axis0_Pn529_Torque_Detection_Signal_Output_Level0x3375 , NULL , NULL , 0x0000 },
/* Object 0x3376 */
{NULL , NULL ,  0x3376 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3376 , aName0x3376 , &Axis0_Pn530_Torque_Detection_Signal_Ouput_Time0x3376 , NULL , NULL , 0x0000 },
/* Object 0x3379 */
{NULL , NULL ,  0x3379 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3379 , aName0x3379 , &Axis0_Pn533_Dynamic_Brake_Current_Detection_Level0x3379 , NULL , NULL , 0x0000 },
/* Object 0x337A */
{NULL , NULL ,  0x337A , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x337A , aName0x337A , &Axis0_Pn534_IPM_Junction_Temperature_Detection_Level0x337A , NULL , NULL , 0x0000 },
/* Object 0x337B */
{NULL , NULL ,  0x337B , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x337B , aName0x337B , &Axis0_Pn535_Discharging_Resistor_Resistance0x337B , NULL , NULL , 0x0000 },
/* Object 0x337C */
{NULL , NULL ,  0x337C , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x337C , aName0x337C , &Axis0_Pn536_Discharging_Resistor_Power0x337C , NULL , NULL , 0x0000 },
/* Object 0x337E */
{NULL , NULL ,  0x337E , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x337E , aName0x337E , &Axis0_Pn538_Momentary_Power_Interruption_Hold_Time0x337E , NULL , NULL , 0x0000 },
/* Object 0x337F */
{NULL , NULL ,  0x337F , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x337F , aName0x337F , &Axis0_Pn539_Pumping_Turn_ON_Delay_Time0x337F , NULL , NULL , 0x0000 },
/* Object 0x3380 */
{NULL , NULL ,  0x3380 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3380 , aName0x3380 , &Axis0_Pn540_Pumping_Turn_OFF_Delay_Time0x3380 , NULL , NULL , 0x0000 },
/* Object 0x33BC */
{NULL , NULL ,  0x33BC , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x33BC , aName0x33BC , &Axis0_Pn600_PSO_Position_Resolution_Ratio0x33BC , NULL , NULL , 0x0000 },
/* Object 0x33BD */
{NULL , NULL ,  0x33BD , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x33BD , aName0x33BD , &Axis0_Pn601_PSO_mode_of_Comparision0x33BD , NULL , NULL , 0x0000 },
/* Object 0x33BE */
{NULL , NULL ,  0x33BE , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x33BE , aName0x33BE , &Axis0_Pn602_PSO_output_polarity0x33BE , NULL , NULL , 0x0000 },
/* Object 0x33BF */
{NULL , NULL ,  0x33BF , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x33BF , aName0x33BF , &Axis0_Pn603_PSO_output_type0x33BF , NULL , NULL , 0x0000 },
/* Object 0x33C0 */
{NULL , NULL ,  0x33C0 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x33C0 , aName0x33C0 , &Axis0_Pn604_PSO_Settings_of_output_pluse_width0x33C0 , NULL , NULL , 0x0000 },
/* Object 0x33C1 */
{NULL , NULL ,  0x33C1 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x33C1 , aName0x33C1 , &Axis0_Pn605_PSO_compensation_of_output_delay0x33C1 , NULL , NULL , 0x0000 },
/* Object 0x33C2 */
{NULL , NULL ,  0x33C2 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x33C2 , aName0x33C2 , &Axis0_Pn606_PSO_origin_offset0x33C2 , NULL , NULL , 0x0000 },
/* Object 0x33C3 */
{NULL , NULL ,  0x33C3 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x33C3 , aName0x33C3 , &Axis0_Pn607_PSO_Start_point_of_camparision0x33C3 , NULL , NULL , 0x0000 },
/* Object 0x33C4 */
{NULL , NULL ,  0x33C4 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x33C4 , aName0x33C4 , &Axis0_Pn608_PSO_End_point_of_camparision0x33C4 , NULL , NULL , 0x0000 },
/* Object 0x33C5 */
{NULL , NULL ,  0x33C5 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x33C5 , aName0x33C5 , &Axis0_Pn609_Properties_of_PSO_comparison_point_10x33C5 , NULL , NULL , 0x0000 },
/* Object 0x33C6 */
{NULL , NULL ,  0x33C6 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x33C6 , aName0x33C6 , &Axis0_Pn610_Target_position_of_PSO_comparison_point_10x33C6 , NULL , NULL , 0x0000 },
/* Object 0x33C7 */
{NULL , NULL ,  0x33C7 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x33C7 , aName0x33C7 , &Axis0_Pn611_Properties_of_PSO_comparison_point_20x33C7 , NULL , NULL , 0x0000 },
/* Object 0x33C8 */
{NULL , NULL ,  0x33C8 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x33C8 , aName0x33C8 , &Axis0_Pn612_Target_position_of_PSO_comparison_point_20x33C8 , NULL , NULL , 0x0000 },
/* Object 0x33C9 */
{NULL , NULL ,  0x33C9 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x33C9 , aName0x33C9 , &Axis0_Pn613_Properties_of_PSO_comparison_point_30x33C9 , NULL , NULL , 0x0000 },
/* Object 0x33CA */
{NULL , NULL ,  0x33CA , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x33CA , aName0x33CA , &Axis0_Pn614_Target_position_of_PSO_comparison_point_30x33CA , NULL , NULL , 0x0000 },
/* Object 0x33CB */
{NULL , NULL ,  0x33CB , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x33CB , aName0x33CB , &Axis0_Pn615_Properties_of_PSO_comparison_point_40x33CB , NULL , NULL , 0x0000 },
/* Object 0x33CC */
{NULL , NULL ,  0x33CC , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x33CC , aName0x33CC , &Axis0_Pn616_Target_position_of_PSO_comparison_point_40x33CC , NULL , NULL , 0x0000 },
/* Object 0x33CD */
{NULL , NULL ,  0x33CD , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x33CD , aName0x33CD , &Axis0_Pn617_Properties_of_PSO_comparison_point_50x33CD , NULL , NULL , 0x0000 },
/* Object 0x33CE */
{NULL , NULL ,  0x33CE , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x33CE , aName0x33CE , &Axis0_Pn618_Target_position_of_PSO_comparison_point_50x33CE , NULL , NULL , 0x0000 },
/* Object 0x33CF */
{NULL , NULL ,  0x33CF , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x33CF , aName0x33CF , &Axis0_Pn619_Properties_of_PSO_comparison_point_60x33CF , NULL , NULL , 0x0000 },
/* Object 0x33D0 */
{NULL , NULL ,  0x33D0 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x33D0 , aName0x33D0 , &Axis0_Pn620_Target_position_of_PSO_comparison_point_60x33D0 , NULL , NULL , 0x0000 },
/* Object 0x33D1 */
{NULL , NULL ,  0x33D1 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x33D1 , aName0x33D1 , &Axis0_Pn621_Properties_of_PSO_comparison_point_70x33D1 , NULL , NULL , 0x0000 },
/* Object 0x33D2 */
{NULL , NULL ,  0x33D2 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x33D2 , aName0x33D2 , &Axis0_Pn622_Target_position_of_PSO_comparison_point_70x33D2 , NULL , NULL , 0x0000 },
/* Object 0x33D3 */
{NULL , NULL ,  0x33D3 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x33D3 , aName0x33D3 , &Axis0_Pn623_Properties_of_PSO_comparison_point_80x33D3 , NULL , NULL , 0x0000 },
/* Object 0x33D4 */
{NULL , NULL ,  0x33D4 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x33D4 , aName0x33D4 , &Axis0_Pn624_Target_position_of_PSO_comparison_point80x33D4 , NULL , NULL , 0x0000 },
/* Object 0x3424 */
{NULL , NULL ,  0x3424 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3424 , aName0x3424 , &Axis0_Pn704_Device_Node_Number0x3424 , NULL , NULL , 0x0000 },
/* Object 0x3434 */
{NULL , NULL ,  0x3434 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3434 , aName0x3434 , &Axis0_Pn720_Homing_Mode0x3434 , NULL , NULL , 0x0000 },
/* Object 0x3435 */
{NULL , NULL ,  0x3435 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3435 , aName0x3435 , &Axis0_Pn721_Research_Reference_Point_Speed0x3435 , NULL , NULL , 0x0000 },
/* Object 0x3436 */
{NULL , NULL ,  0x3436 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3436 , aName0x3436 , &Axis0_Pn722_Origin_Research_Speed0x3436 , NULL , NULL , 0x0000 },
/* Object 0x3437 */
{NULL , NULL ,  0x3437 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3437 , aName0x3437 , &Axis0_Pn723_Origin_Research_Acceleration0x3437 , NULL , NULL , 0x0000 },
/* Object 0x3438 */
{NULL , NULL ,  0x3438 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3438 , aName0x3438 , &Axis0_Pn724_Origin_Return_Offset_Pulse0x3438 , NULL , NULL , 0x0000 },
/* Object 0x3439 */
{NULL , NULL ,  0x3439 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x3439 , aName0x3439 , &Axis0_Pn725_Electronic_Gear_Ratio_Numerator0x3439 , NULL , NULL , 0x0000 },
/* Object 0x343A */
{NULL , NULL ,  0x343A , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x343A , aName0x343A , &Axis0_Pn726_Electronic_Gear_Ratio_Denominator0x343A , NULL , NULL , 0x0000 },
/* Object 0x603F */
{NULL , NULL ,  0x603F , {DEFTYPE_UNSIGNED16 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x603F , aName0x603F , &Error_code_00x603F , NULL , NULL , 0x0000 },
/* Object 0x6040 */
{NULL , NULL ,  0x6040 , {DEFTYPE_UNSIGNED16 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x6040 , aName0x6040 , &Controlword_00x6040 , NULL , NULL , 0x0000 },
/* Object 0x6041 */
{NULL , NULL ,  0x6041 , {DEFTYPE_UNSIGNED16 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x6041 , aName0x6041 , &Statusword_00x6041 , NULL , NULL , 0x0000 },
/* Object 0x605A */
{NULL , NULL ,  0x605A , {DEFTYPE_INTEGER16 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x605A , aName0x605A , &Quick_stop_option_code_00x605A , NULL , NULL , 0x0000 },
/* Object 0x605B */
{NULL , NULL ,  0x605B , {DEFTYPE_INTEGER16 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x605B , aName0x605B , &Shutdown_option_code_00x605B , NULL , NULL , 0x0000 },
/* Object 0x605C */
{NULL , NULL ,  0x605C , {DEFTYPE_INTEGER16 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x605C , aName0x605C , &Disable_operation_option_code_00x605C , NULL , NULL , 0x0000 },
/* Object 0x605D */
{NULL , NULL ,  0x605D , {DEFTYPE_INTEGER16 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x605D , aName0x605D , &Halt_option_code_00x605D , NULL , NULL , 0x0000 },
/* Object 0x605E */
{NULL , NULL ,  0x605E , {DEFTYPE_INTEGER16 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x605E , aName0x605E , &Fault_reaction_option_code_00x605E , NULL , NULL , 0x0000 },
/* Object 0x6060 */
{NULL , NULL ,  0x6060 , {DEFTYPE_INTEGER8 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x6060 , aName0x6060 , &Modes_of_operation_00x6060 , NULL , NULL , 0x0000 },
/* Object 0x6061 */
{NULL , NULL ,  0x6061 , {DEFTYPE_INTEGER8 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x6061 , aName0x6061 , &Modes_of_operation_display_00x6061 , NULL , NULL , 0x0000 },
/* Object 0x6062 */
{NULL , NULL ,  0x6062 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x6062 , aName0x6062 , &Position_demand_value_00x6062 , NULL , NULL , 0x0000 },
/* Object 0x6063 */
{NULL , NULL ,  0x6063 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x6063 , aName0x6063 , &Position_actual_internal_value_00x6063 , NULL , NULL , 0x0000 },
/* Object 0x6064 */
{NULL , NULL ,  0x6064 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x6064 , aName0x6064 , &Position_actual_value_00x6064 , NULL , NULL , 0x0000 },
/* Object 0x6065 */
{NULL , NULL ,  0x6065 , {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x6065 , aName0x6065 , &Following_error_window_00x6065 , NULL , NULL , 0x0000 },
/* Object 0x6066 */
{NULL , NULL ,  0x6066 , {DEFTYPE_UNSIGNED16 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x6066 , aName0x6066 , &Following_error_time_out_00x6066 , NULL , NULL , 0x0000 },
/* Object 0x6067 */
{NULL , NULL ,  0x6067 , {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x6067 , aName0x6067 , &Position_window_00x6067 , NULL , NULL , 0x0000 },
/* Object 0x6068 */
{NULL , NULL ,  0x6068 , {DEFTYPE_UNSIGNED16 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x6068 , aName0x6068 , &Position_window_time_00x6068 , NULL , NULL , 0x0000 },
/* Object 0x6069 */
{NULL , NULL ,  0x6069 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x6069 , aName0x6069 , &Velocity_sensor_actual_value_00x6069 , NULL , NULL , 0x0000 },
/* Object 0x606B */
{NULL , NULL ,  0x606B , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x606B , aName0x606B , &Velocity_demand_value_00x606B , NULL , NULL , 0x0000 },
/* Object 0x606C */
{NULL , NULL ,  0x606C , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x606C , aName0x606C , &Velocity_actual_value_00x606C , NULL , NULL , 0x0000 },
/* Object 0x606D */
{NULL , NULL ,  0x606D , {DEFTYPE_UNSIGNED16 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x606D , aName0x606D , &Velocity_window_00x606D , NULL , NULL , 0x0000 },
/* Object 0x606E */
{NULL , NULL ,  0x606E , {DEFTYPE_UNSIGNED16 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x606E , aName0x606E , &Velocity_window_time_00x606E , NULL , NULL , 0x0000 },
/* Object 0x606F */
{NULL , NULL ,  0x606F , {DEFTYPE_UNSIGNED16 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x606F , aName0x606F , &Velocity_threshold_00x606F , NULL , NULL , 0x0000 },
/* Object 0x6070 */
{NULL , NULL ,  0x6070 , {DEFTYPE_UNSIGNED16 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x6070 , aName0x6070 , &Velocity_threshold_time_00x6070 , NULL , NULL , 0x0000 },
/* Object 0x6071 */
{NULL , NULL ,  0x6071 , {DEFTYPE_INTEGER16 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x6071 , aName0x6071 , &Target_torque_00x6071 , NULL , NULL , 0x0000 },
/* Object 0x6072 */
{NULL , NULL ,  0x6072 , {DEFTYPE_UNSIGNED16 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x6072 , aName0x6072 , &Max_torque_00x6072 , NULL , NULL , 0x0000 },
/* Object 0x6074 */
{NULL , NULL ,  0x6074 , {DEFTYPE_INTEGER16 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x6074 , aName0x6074 , &Torque_demand_00x6074 , NULL , NULL , 0x0000 },
/* Object 0x6077 */
{NULL , NULL ,  0x6077 , {DEFTYPE_INTEGER16 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x6077 , aName0x6077 , &Torque_actual_value_00x6077 , NULL , NULL , 0x0000 },
/* Object 0x6078 */
{NULL , NULL ,  0x6078 , {DEFTYPE_INTEGER16 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x6078 , aName0x6078 , &Current_actual_value_00x6078 , NULL , NULL , 0x0000 },
/* Object 0x607A */
{NULL , NULL ,  0x607A , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x607A , aName0x607A , &Target_position_00x607A , NULL , NULL , 0x0000 },
/* Object 0x607C */
{NULL , NULL ,  0x607C , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x607C , aName0x607C , &Home_offset_00x607C , NULL , NULL , 0x0000 },
/* Object 0x607D */
{NULL , NULL ,  0x607D , {DEFTYPE_RECORD , 2 | (OBJCODE_REC << 8)} , asEntryDesc0x607D , aName0x607D , &Software_position_limit_00x607D, NULL , NULL , 0x0000 },
/* Object 0x607E */
{NULL , NULL ,  0x607E , {DEFTYPE_UNSIGNED8 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x607E , aName0x607E , &Polarity_00x607E , NULL , NULL , 0x0000 },
/* Object 0x607F */
{NULL , NULL ,  0x607F , {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x607F , aName0x607F , &Max_profile_velocity_00x607F , NULL , NULL , 0x0000 },
/* Object 0x6080 */
{NULL , NULL ,  0x6080 , {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x6080 , aName0x6080 , &Max_motor_speed_00x6080 , NULL , NULL , 0x0000 },
/* Object 0x6081 */
{NULL , NULL ,  0x6081 , {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x6081 , aName0x6081 , &Profile_velocity_00x6081 , NULL , NULL , 0x0000 },
/* Object 0x6082 */
{NULL , NULL ,  0x6082 , {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x6082 , aName0x6082 , &End_velocity_00x6082 , NULL , NULL , 0x0000 },
/* Object 0x6083 */
{NULL , NULL ,  0x6083 , {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x6083 , aName0x6083 , &Profile_acceleraion_00x6083 , NULL , NULL , 0x0000 },
/* Object 0x6084 */
{NULL , NULL ,  0x6084 , {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x6084 , aName0x6084 , &Profile_deceleration_00x6084 , NULL , NULL , 0x0000 },
/* Object 0x6085 */
{NULL , NULL ,  0x6085 , {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x6085 , aName0x6085 , &Quick_stop_deceleration_00x6085 , NULL , NULL , 0x0000 },
/* Object 0x6086 */
{NULL , NULL ,  0x6086 , {DEFTYPE_INTEGER16 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x6086 , aName0x6086 , &Motion_profile_type_00x6086 , NULL , NULL , 0x0000 },
/* Object 0x6087 */
{NULL , NULL ,  0x6087 , {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x6087 , aName0x6087 , &Torque_slope_00x6087 , NULL , NULL , 0x0000 },
/* Object 0x6093 */
{NULL , NULL ,  0x6093 , {DEFTYPE_RECORD , 2 | (OBJCODE_REC << 8)} , asEntryDesc0x6093 , aName0x6093 , &Position_factor_00x6093, NULL , NULL , 0x0000 },
/* Object 0x6094 */
{NULL , NULL ,  0x6094 , {DEFTYPE_RECORD , 2 | (OBJCODE_REC << 8)} , asEntryDesc0x6094 , aName0x6094 , &Velocity_encoder_factor_00x6094, NULL , NULL , 0x0000 },
/* Object 0x6097 */
{NULL , NULL ,  0x6097 , {DEFTYPE_RECORD , 2 | (OBJCODE_REC << 8)} , asEntryDesc0x6097 , aName0x6097 , &Acceleration_factor_00x6097, NULL , NULL , 0x0000 },
/* Object 0x6098 */
{NULL , NULL ,  0x6098 , {DEFTYPE_INTEGER8 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x6098 , aName0x6098 , &Homing_method_00x6098 , NULL , NULL , 0x0000 },
/* Object 0x6099 */
{NULL , NULL ,  0x6099 , {DEFTYPE_RECORD , 2 | (OBJCODE_REC << 8)} , asEntryDesc0x6099 , aName0x6099 , &Homing_speeds_00x6099, NULL , NULL , 0x0000 },
/* Object 0x609A */
{NULL , NULL ,  0x609A , {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x609A , aName0x609A , &Homing_acceleration_00x609A , NULL , NULL , 0x0000 },
/* Object 0x60A4 */
{NULL , NULL ,  0x60A4 , {DEFTYPE_UNSIGNED32 , 1 | (OBJCODE_ARR << 8)} , asEntryDesc0x60A4 , aName0x60A4 , &Profile_jerk_00x60A4, NULL , NULL , 0x0000 },
/* Object 0x60B1 */
{NULL , NULL ,  0x60B1 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x60B1 , aName0x60B1 , &Velocity_offset_00x60B1 , NULL , NULL , 0x0000 },
/* Object 0x60B2 */
{NULL , NULL ,  0x60B2 , {DEFTYPE_INTEGER16 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x60B2 , aName0x60B2 , &Torque_offset_00x60B2 , NULL , NULL , 0x0000 },
/* Object 0x60B8 */
{NULL , NULL ,  0x60B8 , {DEFTYPE_UNSIGNED16 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x60B8 , aName0x60B8 , &Touch_probe_function_00x60B8 , NULL , NULL , 0x0000 },
/* Object 0x60B9 */
{NULL , NULL ,  0x60B9 , {DEFTYPE_UNSIGNED16 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x60B9 , aName0x60B9 , &Touch_probe_status_00x60B9 , NULL , NULL , 0x0000 },
/* Object 0x60BA */
{NULL , NULL ,  0x60BA , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x60BA , aName0x60BA , &Touch_probe_pos1_pos_value_00x60BA , NULL , NULL , 0x0000 },
/* Object 0x60BB */
{NULL , NULL ,  0x60BB , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x60BB , aName0x60BB , &Touch_probe_pos1_neg_value_00x60BB , NULL , NULL , 0x0000 },
/* Object 0x60BC */
{NULL , NULL ,  0x60BC , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x60BC , aName0x60BC , &Touch_probe_pos2_pos_value_00x60BC , NULL , NULL , 0x0000 },
/* Object 0x60BD */
{NULL , NULL ,  0x60BD , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x60BD , aName0x60BD , &Touch_probe_pos2_neg_value_00x60BD , NULL , NULL , 0x0000 },
/* Object 0x60C0 */
{NULL , NULL ,  0x60C0 , {DEFTYPE_INTEGER16 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x60C0 , aName0x60C0 , &Interpolation_sub_mode_select_00x60C0 , NULL , NULL , 0x0000 },
/* Object 0x60C1 */
{NULL , NULL ,  0x60C1 , {DEFTYPE_RECORD , 2 | (OBJCODE_REC << 8)} , asEntryDesc0x60C1 , aName0x60C1 , &Interpolation_data_record_00x60C1, NULL , NULL , 0x0000 },
/* Object 0x60C2 */
{NULL , NULL ,  0x60C2 , {DEFTYPE_RECORD , 2 | (OBJCODE_REC << 8)} , asEntryDesc0x60C2 , aName0x60C2 , &Interpolation_time_period_00x60C2, NULL , NULL , 0x0000 },
/* Object 0x60E0 */
{NULL , NULL ,  0x60E0 , {DEFTYPE_UNSIGNED16 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x60E0 , aName0x60E0 , &Positive_torque_limit_value_00x60E0 , NULL , NULL , 0x0000 },
/* Object 0x60E1 */
{NULL , NULL ,  0x60E1 , {DEFTYPE_UNSIGNED16 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x60E1 , aName0x60E1 , &Negative_torque_limit_value_00x60E1 , NULL , NULL , 0x0000 },
/* Object 0x60F4 */
{NULL , NULL ,  0x60F4 , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x60F4 , aName0x60F4 , &Following_error_actual_value_00x60F4 , NULL , NULL , 0x0000 },
/* Object 0x60FA */
{NULL , NULL ,  0x60FA , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x60FA , aName0x60FA , &Control_effort_00x60FA , NULL , NULL , 0x0000 },
/* Object 0x60FC */
{NULL , NULL ,  0x60FC , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x60FC , aName0x60FC , &Position_demand_internal_value_00x60FC , NULL , NULL , 0x0000 },
/* Object 0x60FD */
{NULL , NULL ,  0x60FD , {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x60FD , aName0x60FD , &Digital_inputs_00x60FD , NULL , NULL , 0x0000 },
/* Object 0x60FE */
{NULL , NULL ,  0x60FE , {DEFTYPE_RECORD , 2 | (OBJCODE_REC << 8)} , asEntryDesc0x60FE , aName0x60FE , &Digital_outputs_00x60FE, NULL , NULL , 0x0000 },
/* Object 0x60FF */
{NULL , NULL ,  0x60FF , {DEFTYPE_INTEGER32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x60FF , aName0x60FF , &Target_velocity_00x60FF , NULL , NULL , 0x0000 },
/* Object 0x6502 */
{NULL , NULL ,  0x6502 , {DEFTYPE_UNSIGNED32 , 0 | (OBJCODE_VAR << 8)} , &sEntryDesc0x6502 , aName0x6502 , &Supported_drive_modes_00x6502 , NULL , NULL , 0x0000 },
{NULL,NULL, 0xFFFF, {0, 0}, NULL, NULL, NULL, NULL}};
#endif    //#ifdef _OBJD_
#undef PROTO

/** @}*/
#define _MY_APPLICATION_OBJECTS_H_
