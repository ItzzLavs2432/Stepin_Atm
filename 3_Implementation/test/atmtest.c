/**
 * @file atmtest.c
 * @author Nune Lavanya
 * @brief 
 * @version 0.1
 * @date 2021-09-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "unity.h"

/* Modify these two lines according to the project */
#include"atm.h"
#define PROJECT_NAME   "ATM"

/* Prototypes for all the test functions */
//void mainMenu(void);
void test_checkBalance(float balance);
//float moneyDeposit(float balance);
//float moneyWithdraw(float balance);
//void menuExit(void);
//void errorMessage(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_checkBalance);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_checkBalance() {
  TEST_ASSERT_EQUAL(15000.00, checkBalance(15000.00));
 /* TEST_ASSERT_EQUAL(7,GetPlayerToss("Bairstow","Bhuvaneswar",1));*/
  
}