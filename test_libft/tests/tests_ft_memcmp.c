#include "minunit.h"
#include "libft.h"
#include "../libft/ft_memcmp.c"

MU_TEST(comparing_equal_memories)
{
	// ARRANGE
	char s1[] = "hoje";
	char s2[] = "hoja";
	char expected_result = 0;
	char actual_result;

	// ACT
	actual_result = memcmp(s1, s2, 2);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST(comparing_different_memories_1)
{
	// ARRANGE
	char s1[] = "hoje";
	char s2[] = "hosa";
	char expected_result = -9;
	char actual_result;

	// ACT
	actual_result = memcmp(s1, s2, 4);

	// ASSERT
	mu_assert_int_eq(expected_result, actual_result);
}

MU_TEST_SUITE(ft_memcmp_test_suite) 
{
	MU_RUN_TEST(comparing_equal_memories);
	MU_RUN_TEST(comparing_different_memories_1);
}