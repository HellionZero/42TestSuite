#include "minunit.h"
#include "libft.h"
#include "../libft/ft_strlcat.c"

MU_TEST(strlcat_join_strings)
{
	char		str1[27] = "hoje ta tudo bem";
	const char	str2[10] = " por aqui";
	char		*expectedresult;
	char		*actualresult;
	
	ft_strlcat(str1, str2, 7);
	expectedresult = "hoje ta tudo bem por aqui";
	actualresult = str1;
	mu_assert_string_eq(expectedresult, actualresult);
}

MU_TEST_SUITE(ft_strlcat_test_suite) 
{
	MU_RUN_TEST(strlcat_join_strings);
}