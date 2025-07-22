#include "minunit.h"
#include "libft.h"
#include "../libft/ft_memmove.c"

MU_TEST(memmove_returnmem1)
{
	//arrange
	char 	s1[5] = "";
	char 	s2[5] = "hello";
	char 		*actualresult;
	char		*expectedresult;
	//act
	ft_memmove(s1, s2, 2);
	expectedresult = "he";
	actualresult = s1;
	//assert
	mu_assert_string_eq(expectedresult, actualresult);
}

MU_TEST(memmove_returnnull)
{
	//arrange
	char 		s1[5] = "hello";
	char 		s2[5] = "";
	char		*actualresult;
	char		*expectedresult;
	//act
	ft_memmove(s1, s2, 5);
	expectedresult = "";
	actualresult = s1;
	//assert
	mu_assert_string_eq(expectedresult, actualresult);
}

MU_TEST_SUITE(ft_memmove_test_suite) 
{
	MU_RUN_TEST(memcpy_returnmem1);
	MU_RUN_TEST(memcpy_returnnull);
}