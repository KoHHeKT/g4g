#include <stddef.h>
#include "vendor/unity.h"
#include "../src/{TEMPLATE_HEADER_FILE}"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_hello(void)
{
   TEST_ASSERT_EQUAL_STRING("Hello, World!", {TEMPLATE_FUNC_CALL}());
}

int main(void)
{
   UnityBegin("test/test_hello_world.c");

   RUN_TEST(test_hello);

   UnityEnd();

   return 0;
}
