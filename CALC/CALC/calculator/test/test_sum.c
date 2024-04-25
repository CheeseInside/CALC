#ifdef TEST

#include "unity.h"

#include "sum.h"
#include "mock_get_number.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_sum_read_space_with_5_as_5(void)
{
    char *str = " 5";
    int result = 5;
    get_number_ExpectAndReturn(str, &result, "");
    int res = sum(str);
    TEST_ASSERT_EQUAL_INT(5, res);
}



#endif // TEST
