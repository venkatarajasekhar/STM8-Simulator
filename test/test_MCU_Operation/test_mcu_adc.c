#include "unity.h"
#include "MCU_Operation.h"
#include <stdint.h>
#include <stdio.h>
#include "CPUConfig.h"

#define A   cpu.accA //Accumulator

#define CC  cpu.ccR  //Condition Code
#define CARRY   (cpu.ccR).C //carry flag

void setUp(void)
{
  clearConditionCodeRegister(&(CC));
}

void tearDown(void)
{
}

/**
* The  mcu_adc is just samme like mcu_ADD,
*
* just the addition with add the carry flag
*
* Please refer the complete testCase in (test_mcu_add.c)
*
*
*/

// carry = 0
// 0x0 + 0x1 + carry= 0x1
void test_mcu_adc_given_a_equal_0_than_add_1_carry_is_0_should_get_1(void){
  A = 0x00;
  CARRY = 1;
  mcu_adc(0x01);
  
  TEST_ASSERT_EQUAL_INT8(0x02, A);
  TEST_ASSERT_EQUAL(0, CC.V);
  TEST_ASSERT_EQUAL(0, CC.l1);
  TEST_ASSERT_EQUAL(0, CC.H);
  TEST_ASSERT_EQUAL(0, CC.l0);
  TEST_ASSERT_EQUAL(0, CC.N);
  TEST_ASSERT_EQUAL(0, CC.Z);
  TEST_ASSERT_EQUAL(0, CC.C);
}

// carry = 1
// 0x0 + 0x1 + carry = 0x2
void test_mcu_adc_given_a_equal_0_than_add_1_and_carry_is_1_should_get_2(void){
  A = 0x00;
  CARRY = 1;
  mcu_adc(0x01);
  
  TEST_ASSERT_EQUAL_INT8(0x02, A);
  TEST_ASSERT_EQUAL(0, CC.V);
  TEST_ASSERT_EQUAL(0, CC.l1);
  TEST_ASSERT_EQUAL(0, CC.H);
  TEST_ASSERT_EQUAL(0, CC.l0);
  TEST_ASSERT_EQUAL(0, CC.N);
  TEST_ASSERT_EQUAL(0, CC.Z);
  TEST_ASSERT_EQUAL(0, CC.C);
}


 
