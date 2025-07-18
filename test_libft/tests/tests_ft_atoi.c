#include "minunit.h"
#include "libft.h"
#include "../libft/ft_atoi.c"

MU_TEST(atoi_1_char_to_1_integer)
{
	//arrange
	int	i;
	int actualresult;
	int expectedresult;
	//act
	i = 1;
	expectedresult = 1;
	actualresult = ft_atoi(i);
	//assert
	mu_assert_int_eq(expectedresult, actualresult);
}

MU_TEST_SUITE(ft_atoi_test_suite) 
{
	MU_RUN_TEST(atoi_1_char_to_1_integer);
}