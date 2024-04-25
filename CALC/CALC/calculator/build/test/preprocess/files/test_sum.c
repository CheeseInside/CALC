#include "build/test/mocks/mock_get_number.h"
#include "src/sum.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"








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

    get_number_CMockExpectAndReturn(20, str, &result, "");

    int res = sum(str);

    UnityAssertEqualNumber((UNITY_INT)((5)), (UNITY_INT)((res)), (

   ((void *)0)

   ), (UNITY_UINT)(22), UNITY_DISPLAY_STYLE_INT);

}
