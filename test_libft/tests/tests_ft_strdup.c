#include "minunit.h"
#include "libft.h"
#include "../libft/ft_strdup.c"

MU_TEST(strdup_helloworld_to_helloworld)
{
	//arrange
	char 	*i = "helloworld";
	char 		*actualresult;
	char		*expectedresult;
	//act
	expectedresult = "helloworld";
	actualresult = ft_strdup(i);
	//assert
	mu_assert_string_eq(expectedresult, actualresult);
}

MU_TEST(strdup_hello_to_hello)
{
	//arrange
	char 		*i = "hello";
	char		*actualresult;
	char		*expectedresult;
	//act
	expectedresult = "hello";
	actualresult = ft_strdup(i);
	//assert
	mu_assert_string_eq(expectedresult, actualresult);
}

MU_TEST_SUITE(ft_strdup_test_suite) 
{
	MU_RUN_TEST(strdup_helloworld_to_helloworld);
	MU_RUN_TEST(strdup_hello_to_hello);
}