#include "minunit.h"
#include "libft.h"
#include "../libft/ft_memmove.c"

MU_TEST(memmove_returntrunc)
{
	//arrange
	char 	s1[6] = "";
	char 	s2[6] = "hello";
	char 		*actualresult;
	char		*expectedresult;
	//act
	expectedresult = "he";
	actualresult = ft_memmove(s1, s2, 2);;
	//assert
	mu_assert_string_eq(expectedresult, actualresult);
}

MU_TEST(memmove_returnfull)
{
	//arrange
	char 	s1[6] = "";
	char 	s2[6] = "hello";
	char 		*actualresult;
	char		*expectedresult;
	//act
	
	expectedresult = "hello";
	actualresult = ft_memmove(s1, s2, 5);
	//assert
	mu_assert_string_eq(expectedresult, actualresult);
}

MU_TEST(memmove_returnnull)
{
	//arrange
	char 		s1[6] = "hello";
	char 		s2[6] = "";
	char		*actualresult;
	char		*expectedresult;
	//act
	
	expectedresult = "";
	actualresult = ft_memmove(s1, s2, 5);
	//assert
	mu_assert_string_eq(expectedresult, actualresult);
}

MU_TEST_SUITE(ft_memmove_test_suite)
{
	MU_RUN_TEST(memmove_returntrunc);
	MU_RUN_TEST(memmove_returnnull);
	MU_RUN_TEST(memmove_returnfull);
}