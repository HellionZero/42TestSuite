#include "minunit.h"
#include "libft.h"
#include "../libft/ft_substr.c"

MU_TEST(size_major_than_len)
{
	//arrange
	char 	i[10] = "helloworld";
	char 		*actualresult;
	char		*expectedresult;
	//act
	expectedresult = "w";
	actualresult = ft_substr(i, 5, 2);
	//assert
	mu_assert_string_eq(expectedresult, actualresult);
}

MU_TEST(find_substring)
{
	//arrange
	char 	i[10] = "helloworld";
	char 		*actualresult;
	char		*expectedresult;
	//act
	expectedresult = "world";
	actualresult = ft_substr(i, 5, 6);
	//assert
	mu_assert_string_eq(expectedresult, actualresult);
}

MU_TEST_SUITE(ft_substr_test_suite) 
{
	MU_RUN_TEST(size_major_than_len);
	MU_RUN_TEST(find_substring);

}