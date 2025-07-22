#include "minunit.h"
#include "libft.h"
#include "../libft/ft_strrchr.c"

MU_TEST(strrchr_find_character)
{
	char		str1[17] = "hoje ta tudo bem";
	char		*expectedresult;
	char		*actualresult;
	
	
	expectedresult = "em";
	actualresult = ft_strrchr(str1, 'e');
	mu_assert_string_eq(expectedresult, actualresult);
}

MU_TEST_SUITE(ft_strrchr_test_suite) 
{
	MU_RUN_TEST(strrchr_find_character);
}