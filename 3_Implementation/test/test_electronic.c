#include "unity.h"
#include "electronic.h"

/* Modify these two lines according to the project */
#include "electronic.h"
#define PROJECT_NAME    "Electronic Store"

/* Prototypes for all the test functions */
void total_tv();
void total_vcr();
void total_lcd() ;
void subtotal();
void tax();


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
  RUN_TEST(total_tv);
  RUN_TEST(total_vcr);
  RUN_TEST(total_lcd);
  RUN_TEST(subtotal);
  RUN_TEST(tax);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void total_tv() {
  TEST_ASSERT_EQUAL(2,100);
 
}
void total_vcr() {
 
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(3,80)
  
}
void total_lcd() {
  TEST_ASSERT_EQUAL(4,500));
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(4,500);
}

void subtotal() {
  TEST_ASSERT_EQUAL(1,2,4,4,6);
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(1,2,4,4,6);
}

void tax() {
  TEST_ASSERT_EQUAL(10,15);
  
  
  // TEST_ASSERT_EQUAL(10,15);
}
