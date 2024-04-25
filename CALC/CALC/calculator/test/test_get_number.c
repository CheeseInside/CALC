#ifdef TEST

#include "unity.h"

#include "get_number.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_empty_string_should_return_0(void)
{
    int result = 999;
    const char *str = "";
    const char *remain;

    remain = get_number(str, &result);
    TEST_ASSERT_EQUAL_INT(0, result);
    TEST_ASSERT_EQUAL_STRING("", remain);
}

void test_string_298_should_return_298(void)
{
    int result = 999;
    const char *str = "298";
    const char *remain;

    remain = get_number(str, &result);
    TEST_ASSERT_EQUAL_INT(298, result);
    TEST_ASSERT_EQUAL_STRING("", remain);
}

void test_string_298a_should_return_298(void)
{
    int result = 999;
    const char *str = "298+3";
    const char *remain;

    remain = get_number(str, &result);
    TEST_ASSERT_EQUAL_INT(298, result);
    TEST_ASSERT_EQUAL_STRING("+3", remain);
}

void test_string_space_298_should_return_298(void)
{
    int result = 999;
    const char *str = "  298";
    const char *remain;

    remain = get_number(str, &result);
    TEST_ASSERT_EQUAL_INT(298, result);
    TEST_ASSERT_EQUAL_STRING("", remain);
}
void test_sum_read_space_with_5_as_5(void)
{
    char *str = " 5";
    int result = 5;
    const char *remain;

    remain = get_number(str, &result);
    TEST_ASSERT_EQUAL_INT(5, result);
    TEST_ASSERT_EQUAL_STRING("", remain);
}
void test_string_298_space_should_return_298(void)
{
    int result = 999;
    const char *str = "  298  ";
    const char *remain;

    remain = get_number(str, &result);
    TEST_ASSERT_EQUAL_INT(298, result);
    TEST_ASSERT_EQUAL_STRING("  ", remain);
}

#endif // TEST
