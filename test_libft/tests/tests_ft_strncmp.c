#include "minunit.h"
#include "libft.h"
#include "../libft/ft_strncmp.c"

MU_TEST(strncmp_n1_is_bigger_but_len_is_less)
{
	char		str1[5] = "hoje";
	char		str2[5] = "hojr";
	int			expectedresult;
	int			actualresult;
	
	
	expectedresult = 0;
	actualresult = ft_strncmp(str1, str2, 3);
	mu_assert_int_eq(expectedresult, actualresult);
}

MU_TEST(strncmp_n1_is_bigger)
{
	char		str1[5] = "hoje";
	char		str2[5] = "hojr";
	int			expectedresult;
	int			actualresult;
	
	
	expectedresult = -13;
	actualresult = ft_strncmp(str1, str2, 4);
	mu_assert_int_eq(expectedresult, actualresult);
}

MU_TEST(strncmp_n2_is_bigger)
{
	char		str1[5] = "hojr";
	char		str2[5] = "hoje";
	int			expectedresult;
	int			actualresult;
	
	
	expectedresult = 13;
	actualresult = ft_strncmp(str1, str2, 4);
	mu_assert_int_eq(expectedresult, actualresult);
}

MU_TEST_SUITE(ft_strncmp_test_suite) 
{
	MU_RUN_TEST(strncmp_n1_is_bigger_but_len_is_less);
	MU_RUN_TEST(strncmp_n1_is_bigger);
	MU_RUN_TEST(strncmp_n2_is_bigger);
}