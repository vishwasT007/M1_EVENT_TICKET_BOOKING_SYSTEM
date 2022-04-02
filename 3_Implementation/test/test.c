#include "unity.h"
#include "function.h"


// Setup for Unity Framework
void setUp()
{

}
void tearDown()
{
  
}
void test_changepriceticket(void)
{
    int price1=800;
    TEST_ASSERT_EQUAL(800,change_Price_Ticket(price1));
    
}

void test_enter_choice(void) {
    TEST_ASSERT_EQUAL(1,enter_choice(1));
}



int main(void)
{
  UNITY_BEGIN();
  
  RUN_TEST(test_changepriceticket);
  RUN_TEST(test_enter_choice);
  return UNITY_END();
}
