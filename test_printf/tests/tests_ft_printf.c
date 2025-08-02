#include "minunit.h"
#include "ft_printf.h"
#include "../ft_printf/ft_printf.c"

MU_TEST(ft_printf_simple_print)
{
	char *expectedresult;
	char *actualresult;

	actualresult = "hoje vamos";
	expectedresult = "hoje vamos";
	ft_printf("hoje vamos");
	//assert
	mu_assert_string_eq(expectedresult, actualresult);
}



MU_TEST_SUITE(ft_printf_test_suite) 
{
	MU_RUN_TEST(ft_printf_simple_print);
}