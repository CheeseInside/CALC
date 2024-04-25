#include "src/get_number.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"








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

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((result)), (

   ((void *)0)

   ), (UNITY_UINT)(22), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualString((const char*)(("")), (const char*)((remain)), (

   ((void *)0)

   ), (UNITY_UINT)(23));

}



void test_string_298_should_return_298(void)

{

    int result = 999;

    const char *str = "298";

    const char *remain;



    remain = get_number(str, &result);

    UnityAssertEqualNumber((UNITY_INT)((298)), (UNITY_INT)((result)), (

   ((void *)0)

   ), (UNITY_UINT)(33), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualString((const char*)(("")), (const char*)((remain)), (

   ((void *)0)

   ), (UNITY_UINT)(34));

}



void test_string_298a_should_return_298(void)

{

    int result = 999;

    const char *str = "298+3";

    const char *remain;



    remain = get_number(str, &result);

    UnityAssertEqualNumber((UNITY_INT)((298)), (UNITY_INT)((result)), (

   ((void *)0)

   ), (UNITY_UINT)(44), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualString((const char*)(("+3")), (const char*)((remain)), (

   ((void *)0)

   ), (UNITY_UINT)(45));

}



void test_string_space_298_should_return_298(void)

{

    int result = 999;

    const char *str = "  298";

    const char *remain;



    remain = get_number(str, &result);

    UnityAssertEqualNumber((UNITY_INT)((298)), (UNITY_INT)((result)), (

   ((void *)0)

   ), (UNITY_UINT)(55), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualString((const char*)(("")), (const char*)((remain)), (

   ((void *)0)

   ), (UNITY_UINT)(56));

}

void test_sum_read_space_with_5_as_5(void)

{

    char *str = " 5";

    int result = 5;

    const char *remain;



    remain = get_number(str, &result);

    UnityAssertEqualNumber((UNITY_INT)((5)), (UNITY_INT)((result)), (

   ((void *)0)

   ), (UNITY_UINT)(65), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualString((const char*)(("")), (const char*)((remain)), (

   ((void *)0)

   ), (UNITY_UINT)(66));

}

void test_string_298_space_should_return_298(void)

{

    int result = 999;

    const char *str = "  298  ";

    const char *remain;



    remain = get_number(str, &result);

    UnityAssertEqualNumber((UNITY_INT)((298)), (UNITY_INT)((result)), (

   ((void *)0)

   ), (UNITY_UINT)(75), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualString((const char*)(("  ")), (const char*)((remain)), (

   ((void *)0)

   ), (UNITY_UINT)(76));

}
