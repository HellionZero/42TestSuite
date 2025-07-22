#include "minunit.h"
#include "libft.h"
#include "../libft/ft_strtrim.c"

MU_TEST(strtrim_one_space)
{
	//arrange
	const char 	i[7] = "  ola  ";
	const char	*actualresult;
	const char	*expectedresult;
	//act
	expectedresult = "ola";
	actualresult = ft_strtrim(i, " ");
	//assert
	mu_assert_string_eq(expectedresult, actualresult);
}

MU_TEST(strtrim_blank_char)
{
	//arrange
	const char 	i[4] = "dddd";
	const char	*actualresult;
	const char	*expectedresult;
	//act
	expectedresult = "dddd";
	actualresult = ft_strtrim(i, "");
	//assert
	mu_assert_string_eq(expectedresult, actualresult);
}


MU_TEST_SUITE(ft_strtrim_test_suite) 
{
	MU_RUN_TEST(strtrim_one_space);
	MU_RUN_TEST(strtrim_blank_char);
}