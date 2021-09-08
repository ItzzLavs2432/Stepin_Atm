#include "unity.h"

/* Modify these two lines according to the project */
#include "atm.h"
#define PROJECT_NAME   "ATM"

/* Prototypes for all the test functions */
//void test_GetPlayerToss(void);
void test_mainMenu(void);
void test_checkBalance(void);
//void test_moneyDeposit(void);
//float moneyWithdraw(float balance);
void test_menuExit(void);
void test_errorMessage(void);

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
  RUN_TEST(test_mainMenu);
  RUN_TEST(test_checkBalance);
  // RUN_TEST(test_moneyDeposit);
  RUN_TEST(test_menuExit);
  RUN_TEST(test_errorMessage);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_mainMenu(void) {
  TEST_ASSERT_EQUAL(6,mainMenu());
 /* TEST_ASSERT_EQUAL(7,GetPlayerToss("Bairstow","Bhuvaneswar",1));*/
  
}
void test_checkBalance(void) {
  TEST_ASSERT_EQUAL(15000.00,checkBalance(15000.00));
 /* TEST_ASSERT_EQUAL(7,GetPlayerToss("Bairstow","Bhuvaneswar",1));*/
}
void test_menuExit(void) {
  TEST_ASSERT_EQUAL(5,menuExit());
 /* TEST_ASSERT_EQUAL(7,GetPlayerToss("Bairstow","Bhuvaneswar",1));*/
}
void test_errorMessage(void) {
  TEST_ASSERT_EQUAL(9,errorMessage());
 /* TEST_ASSERT_EQUAL(7,GetPlayerToss("Bairstow","Bhuvaneswar",1));*/
}