#ifndef CIA402_H
#define CIA402_H

#include "MyApplication.h"

#define TO_NOT_READY_TO_SWITCH_ON(x) (x & 0b1111111110110000)
#define TO_SWITCH_ON_DISABLED(x) (x & 0b1111111110110000 | 0b01000000)
#define TO_READY_TO_SWITCH_ON(x) (x & 0b1111111110010000 | 0b00100001)
#define TO_SWITCHED_ON(x) (x & 0b1111111110010000 | 0b00100011)
#define TO_OPERATION_ENABLED(x) (x & 0b1111111110010000 | 0b00100111)
#define TO_QUICK_STOP_ACTIVE(x) (x & 0b1111111110010000 | 0b00000111)
#define TO_FAULT_REACTION_ACTIVE(x) (x & 0b1111111110110000 | 0b00001111)
#define TO_FAULT(x) (x & 0b1111111110110000 | 0b00001000)

static void cia402_step() {
  static unsigned char Command = 0;
  // Shutdown
  if ((Controlword_00x6040 & 0b10000111) == 0b00000110) {
    Command = 0;
  }
  // Switch on and Diabel operation
  else if ((Controlword_00x6040 & 0b10001111) == 0b00000111) {
    Command = 1;
  }
  // Switch on and Enable operation
  else if ((Controlword_00x6040 & 0b10001111) == 0b00001111) {
    Command = 2;
  }
  // Disable voltage
  else if ((Controlword_00x6040 & 0b10000010) == 0b00000000) {
    Command = 3;
  }
  // Quick stop
  else if ((Controlword_00x6040 & 0b10000110) == 0b00000010) {
    Command = 4;
  }
  // Fault reset
  else if ((Controlword_00x6040 & 0b10000000) == 0b10000000) {
    Command = 5;
  }

  static unsigned char State = 0;
  switch (Statusword_00x6041 & 0b01001111) {
  // Not ready to switch on
  case 0b00000000:
    State = 0;
    break;
  // Switch on disabled
  case 0b01000000:
    State = 1;
    break;
  // Ready to switch on
  case 0b00000001:
    State = 2;
    break;
  // Switched on
  case 0b00000011:
    State = 3;
    break;

  case 0b00000111:
    switch (Statusword_00x6041 & 0b01101111) {
    // Operation enabled
    case 0b00100111:
      State = 4;
      break;
    // Quick stop active
    case 0b00000111:
      State = 5;
      break;
    }
    break;

  // Fault reaction active
  case 0b00001111:
    State = 6;
    break;
  // Fault
  case 0b00001000:
    State = 7;
    break;
  }

  // State Transition 13
  if (Error_code_00x603F != 0) {
    Statusword_00x6041 = TO_FAULT_REACTION_ACTIVE(Statusword_00x6041);
    return;
  }

  // State Transition 14
  if (State == 6) {
    Statusword_00x6041 = TO_FAULT(Statusword_00x6041);
    return;
  }

  switch (Command * 10 + State) {
  // State Transition 2
  case 01:
    Statusword_00x6041 = TO_READY_TO_SWITCH_ON(Statusword_00x6041);
    break;

  // State Transition 3
  case 12:
  case 22:
    Statusword_00x6041 = TO_SWITCHED_ON(Statusword_00x6041);
    break;

  // State Transition 4
  // 'Enable Operation' command received from host.
  case 23:
    Statusword_00x6041 = TO_OPERATION_ENABLED(Statusword_00x6041);
    break;

  // State Transition 5
  case 14:
    Statusword_00x6041 = TO_SWITCHED_ON(Statusword_00x6041);
    break;

  // State Transition 6
  case 03:
    Statusword_00x6041 = TO_READY_TO_SWITCH_ON(Statusword_00x6041);
    break;

  // State Transition 7
  case 32:
  case 42:
    Statusword_00x6041 = TO_SWITCH_ON_DISABLED(Statusword_00x6041);
    break;

  // State Transition 8
  case 04:
    Statusword_00x6041 = TO_READY_TO_SWITCH_ON(Statusword_00x6041);
    break;

  // State Transition 9
  case 34:
    Statusword_00x6041 = TO_SWITCH_ON_DISABLED(Statusword_00x6041);
    break;

  // State Transition 10
  case 33:
  case 43:
    Statusword_00x6041 = TO_SWITCH_ON_DISABLED(Statusword_00x6041);
    break;

  // State Transition 11
  case 44:
    Statusword_00x6041 = TO_QUICK_STOP_ACTIVE(Statusword_00x6041);
    break;

  // State Transition 12
  case 35:
    Statusword_00x6041 = TO_SWITCH_ON_DISABLED(Statusword_00x6041);
    break;

  // State Transition 15
  case 57:
    Statusword_00x6041 = TO_SWITCH_ON_DISABLED(Statusword_00x6041);
    break;

  // State Transition 16
  case 25:
    Statusword_00x6041 = TO_OPERATION_ENABLED(Statusword_00x6041);
    break;
  }
}

#endif // CIA402_H
