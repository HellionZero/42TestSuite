#include "minunit.h"
#include "libft.h"
#include "../libft/ft_strnstr.c"

MU_TEST(strnstr_little_is_found)
{
	char		str1[] = "hoje eu quero";
	char		str2[] = "eu";
	char		*expectedresult;
	char		*actualresult;
	
	
	expectedresult = "eu quero";
	actualresult = ft_strnstr(str1, str2, 3);
	mu_assert_string_eq(expectedresult, actualresult);
}

MU_TEST_SUITE(ft_strnstr_test_suite) 
{
	MU_RUN_TEST(strnstr_little_is_found);
}