#include "minunit.h"
#include "libft.h"
#include "../libft/ft_substr.c"

MU_TEST(big_to_zero)
{
	//arrange
	char 	i[10] = "helloworld";
	char 		*actualresult;
	char		*expectedresult;
	//act
	expectedresult = '\0';
	actualresult = ft_substr(i, 12, 5);
	//assert
	mu_assert_string_eq(expectedresult, actualresult);
}

MU_TEST_SUITE(ft_substr_test_suite) 
{
	MU_RUN_TEST(big_to_zero);

}