/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_empty_string_should_return_0(void);
extern void test_string_298_should_return_298(void);
extern void test_string_298a_should_return_298(void);
extern void test_string_space_298_should_return_298(void);
extern void test_sum_read_space_with_5_as_5(void);
extern void test_string_298_space_should_return_298(void);


/*=======Mock Management=====*/
static void CMock_Init(void)
{
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
  GlobalOrderError = NULL;
}
static void CMock_Verify(void)
{
}
static void CMock_Destroy(void)
{
}

/*=======Test Reset Options=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  CMock_Verify();
  CMock_Destroy();
  CMock_Init();
  setUp();
}
void verifyTest(void);
void verifyTest(void)
{
  CMock_Verify();
}

/*=======Test Runner Used To Run Each Test=====*/
static void run_test(UnityTestFunction func, const char* name, UNITY_LINE_TYPE line_num)
{
    Unity.CurrentTestName = name;
    Unity.CurrentTestLineNumber = line_num;
#ifdef UNITY_USE_COMMAND_LINE_ARGS
    if (!UnityTestMatches())
        return;
#endif
    Unity.NumberOfTests++;
    UNITY_CLR_DETAILS();
    UNITY_EXEC_TIME_START();
    CMock_Init();
    if (TEST_PROTECT())
    {
        setUp();
        func();
    }
    if (TEST_PROTECT())
    {
        tearDown();
        CMock_Verify();
    }
    CMock_Destroy();
    UNITY_EXEC_TIME_STOP();
    UnityConcludeTest();
}

/*=======MAIN=====*/
int main(void)
{
  UnityBegin("test_get_number.c");
  run_test(test_empty_string_should_return_0, "test_empty_string_should_return_0", 15);
  run_test(test_string_298_should_return_298, "test_string_298_should_return_298", 26);
  run_test(test_string_298a_should_return_298, "test_string_298a_should_return_298", 37);
  run_test(test_string_space_298_should_return_298, "test_string_space_298_should_return_298", 48);
  run_test(test_sum_read_space_with_5_as_5, "test_sum_read_space_with_5_as_5", 58);
  run_test(test_string_298_space_should_return_298, "test_string_298_space_should_return_298", 68);

  return UnityEnd();
}
