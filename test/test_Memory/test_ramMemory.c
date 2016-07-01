#include "unity.h"
#include "Memory.h"
#include "CPUConfig.h"
#include <malloc.h>
#include <stdint.h>
#include <stdio.h>

#define MEM_READ_BYTE(addr)  memoryTable[addr/0x100](MEM_READ, addr, 1)
#define MEM_READ_WORD(addr)  memoryTable[addr/0x100](MEM_READ, addr, 2)

#define MEM_WRITE_BYTE(addr,data)  memoryTable[addr/0x100](MEM_WRITE, addr, data)


void setUp(void)
{
  ramBlock = createMemoryBlock(RAM_START_ADDR, RAM_SIZE);
  //cpuBlock = createMemoryBlock(CPU_START_ADDR, CPU_SIZE);
  //flashBlock = createMemoryBlock(EEPROM_START_ADDR, EEPROM_SIZE);
}

void tearDown(void)
{
  free(ramBlock);
  // free(cpuBlock);
  // free(flashBlock);
}

void test_ramMemory_write_in_0xBB_and_getBack_0xBB(void)
{
  uint8_t data = 0xBB;
  
  uint32_t addr = 0x02FF;
  uint8_t size = 0x1;
  
 
  MEM_WRITE_BYTE(addr,data);
  uint8_t value = MEM_READ_BYTE(addr);
  TEST_ASSERT_EQUAL_INT8(0xBB, value);
}

void test_ramMemory_write_in_0xBBCC_and_getBack_0xBB(void)
{
  uint16_t data = 0xBBCC;
  
  uint32_t addr = 0x02FF;
  uint8_t size = 0x1;
  
 
  MEM_WRITE_BYTE(addr,data);
  uint8_t value = MEM_READ_BYTE(addr);
  TEST_ASSERT_EQUAL_INT8(0xBBCC, value);
}

void test_ramMemory_write_in_0xBBCC_and_getBack_0xBBCC(void)
{
  uint16_t data = 0xBBCC;
  
  uint32_t addr = 0x02FF;
  uint8_t size = 0x1;
  
 
  MEM_WRITE_BYTE(addr,data);
  uint8_t value = MEM_READ_BYTE(addr);
  TEST_ASSERT_EQUAL_INT8(0xBBCC, value);
}

void test_cpuMemory_write_in_0xAADE_and_getBack_0xAADE(void)
{
  uint16_t data = 0xAADE;
  
  uint32_t addr = 0x7FCF;
  uint8_t size = 0x1;
  
 
  // MEM_WRITE_BYTE(addr,data);
  // uint8_t value = MEM_READ_BYTE(addr);
  // TEST_ASSERT_EQUAL_INT8(0xAADE, value);
}
