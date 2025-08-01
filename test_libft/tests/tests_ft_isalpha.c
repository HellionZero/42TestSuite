#include "minunit.h"
#include "libft.h"
#include "../libft/ft_isalpha.c"

MU_TEST(test_if_is_a_is_alpha)
{
	// ARRANGE
	char c = 'x';
	char expected_result = 1;
	char actual_result;

	// ACT
	actual_result = ft_isalpha(c);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(test_if_zero_a_is_alpha)
{
	// ARRANGE
	char c = '0';
	char expected_result = 0;
	char actual_result;

	// ACT
	actual_result = ft_isalpha(c);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(ft_isalpha_test_suite) 
{
	MU_RUN_TEST(test_if_is_a_is_alpha);
	MU_RUN_TEST(test_if_zero_a_is_alpha);
}