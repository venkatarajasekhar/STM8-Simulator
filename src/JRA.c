#include "JRA.h"
#include <stdio.h>
#include <stdint.h>
#include "Description.h"
#include "MCU_Operation.h"
#include "CPUConfig.h"
#include "Memory.h"

uint8_t jra_shortoff(uint8_t *opcode){
  uint32_t newPC = PC+ 2 + GET_NEXT_BYTE_OF(opcode);
 
  SET_PC(newPC);
  return 2;
}