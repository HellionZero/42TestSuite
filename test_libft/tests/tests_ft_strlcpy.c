#include "minunit.h"
#include "libft.h"
#include "../libft/ft_strlcpy.c"

MU_TEST(strlcpy_len_of_three)
{
	//arrange
	char 	i[30] = "helloworld";
	char 	j[7] = "estamos";
	char 		*actualresult;
	char		*expectedresult;
	//act
	ft_strlcpy(j, i, 4);
	expectedresult = "hel";
	actualresult = j;
	//assert
	mu_assert_string_eq(expectedresult, actualresult);
}

MU_TEST(strlcpy_full_len)
{
	//arrange
	char 		i[5] = "hello";
	char 		j[7] = "estamos";
	char		*actualresult;
	char		*expectedresult;
	//act
	ft_strlcpy(j, i, 6);
	expectedresult = "hello";
	actualresult = j;
	//assert
	mu_assert_string_eq(expectedresult, actualresult);
}

MU_TEST_SUITE(ft_strlcpy_test_suite) 
{
	MU_RUN_TEST(strlcpy_len_of_three);
	MU_RUN_TEST(strlcpy_full_len);
}