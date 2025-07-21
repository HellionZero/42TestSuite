#include "minunit.h"
#include "libft.h"
#include "../libft/ft_bzero.c"

MU_TEST(atoi_1_char_to_1_integer)
{
	//arrange
	const char 	*i = "1";
	int 		actualresult;
	int 		expectedresult;
	//act
	expectedresult = 1;
	actualresult = ft_atoi(i);
	//assert
	mu_assert_int_eq(expectedresult, actualresult);
}

MU_TEST(atoi_2_char_to_2_integer)
{
	//arrange
	const char 	*i = "2";
	int 		actualresult;
	int 		expectedresult;
	//act
	expectedresult = 2;
	actualresult = ft_atoi(i);
	//assert
	mu_assert_int_eq(expectedresult, actualresult);
}

MU_TEST(atoi_42_char_to_42_integer)
{
	//arrange
	const char 	*i = "42";
	int 		actualresult;
	int 		expectedresult;
	//act
	expectedresult = 42;
	actualresult = ft_atoi(i);
	//assert
	mu_assert_int_eq(expectedresult, actualresult);
}

MU_TEST(atoi_space_42_char_to_42_integer)
{
	//arrange
	const char 	*i = " 42";
	int 		actualresult;
	int 		expectedresult;
	//act
	expectedresult = 42;
	actualresult = ft_atoi(i);
	//assert
	mu_assert_int_eq(expectedresult, actualresult);
}

MU_TEST(atoi_plus_42_char_to_42_integer)
{
	//arrange
	const char 	*i = "+42";
	int 		actualresult;
	int 		expectedresult;
	//act
	expectedresult = 42;
	actualresult = ft_atoi(i);
	//assert
	mu_assert_int_eq(expectedresult, actualresult);
}

MU_TEST(atoi_minus_42_char_to_42_integer)
{
	//arrange
	const char 	*i = "-42";
	int 		actualresult;
	int 		expectedresult;
	//act
	expectedresult = -42;
	actualresult = ft_atoi(i);
	//assert
	mu_assert_int_eq(expectedresult, actualresult);
}

MU_TEST(atoi_alpha42_char_to_42_integer)
{
	//arrange
	const char 	*i = "ab42";
	int 		actualresult;
	int 		expectedresult;
	//act
	expectedresult = 0;
	actualresult = ft_atoi(i);
	//assert
	mu_assert_int_eq(expectedresult, actualresult);
}

MU_TEST(atoi_12a42_char_to_12_integer)
{
	//arrange
	const char 	*i = "12a42";
	int 		actualresult;
	int 		expectedresult;
	//act
	expectedresult = 12;
	actualresult = ft_atoi(i);
	//assert
	mu_assert_int_eq(expectedresult, actualresult);
}

MU_TEST(atoi_12_42_char_to_12_integer)
{
	//arrange
	const char 	*i = "12 42";
	int 		actualresult;
	int 		expectedresult;
	//act
	expectedresult = 12;
	actualresult = ft_atoi(i);
	//assert
	mu_assert_int_eq(expectedresult, actualresult);
}

MU_TEST(atoi_plus_minus_42_char_to_0_integer)
{
	//arrange
	const char 	*i = "+-42";
	int 		actualresult;
	int 		expectedresult;
	//act
	expectedresult = 0;
	actualresult = ft_atoi(i);
	//assert
	mu_assert_int_eq(expectedresult, actualresult);
}

MU_TEST(atoi_extreme_signal_to_342)
{
	//arrange
	const char 	*i = "   --++-- -342";
	int 		actualresult;
	int 		expectedresult;
	//act
	expectedresult = 0;
	actualresult = ft_atoi(i);
	//assert
	mu_assert_int_eq(expectedresult, actualresult);
}

MU_TEST_SUITE(ft_atoi_test_suite) 
{
	MU_RUN_TEST(atoi_1_char_to_1_integer);
	MU_RUN_TEST(atoi_2_char_to_2_integer);
	MU_RUN_TEST(atoi_42_char_to_42_integer);
	MU_RUN_TEST(atoi_space_42_char_to_42_integer);
	MU_RUN_TEST(atoi_plus_42_char_to_42_integer);
	MU_RUN_TEST(atoi_minus_42_char_to_42_integer);
	MU_RUN_TEST(atoi_alpha42_char_to_42_integer);
	MU_RUN_TEST(atoi_12_42_char_to_12_integer);
	MU_RUN_TEST(atoi_plus_minus_42_char_to_0_integer);
	MU_RUN_TEST(atoi_extreme_signal_to_342);
}