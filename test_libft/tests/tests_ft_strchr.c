#include "minunit.h"
#include "libft.h"
#include "../libft/ft_strchr.c"

MU_TEST(strchr_find_character)
{
	char		str1[17] = "hoje ta tudo bem";
	char		*expectedresult;
	char		*actualresult;
	
	
	expectedresult = "udo bem";
	actualresult = ft_strchr(str1, 'u');
	mu_assert_string_eq(expectedresult, actualresult);
}

MU_TEST_SUITE(ft_strchr_test_suite) 
{
	MU_RUN_TEST(strchr_find_character);
}