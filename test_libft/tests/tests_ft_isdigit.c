#include "minunit.h"
#include "libft.h"
#include "../libft/ft_isdigit.c"

MU_TEST(test_if_is_zero_is_digit)
{
	// ARRANGE
	char c = '0';
	char expected_result = 1;
	char actual_result;

	// ACT
	actual_result = ft_isdigit(c);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_if_a_is_digit)
{
	// ARRANGE
	char c = 'a';
	char expected_result = 0;
	char actual_result;

	// ACT
	actual_result = ft_isdigit(c);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(ft_isdigit_test_suite) 
{
	MU_RUN_TEST(test_if_is_zero_is_digit);
	MU_RUN_TEST(test_if_a_is_digit);
}