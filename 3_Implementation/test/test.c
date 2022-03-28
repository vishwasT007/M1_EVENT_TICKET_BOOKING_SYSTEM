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
    TEST_ASSERT_EQUAL(800,changepriceticket(price1));
    
}

int main(void)
{
  UNITY_BEGIN();
  
  RUN_TEST(test_changepriceticket);
  return UNITY_END();
}