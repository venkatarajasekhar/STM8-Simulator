#ifndef CALLF_H
#define CALLF_H
#include <stdint.h>

void mcu_callf(uint32_t address, uint8_t length);
uint8_t callf_extmem(uint8_t *opcode);
uint8_t callf_longptr_e(uint8_t *opcode);

#endif // CALLF_H
