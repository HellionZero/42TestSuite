#include "minunit.h"
#include "libft.h"
#include "../libft/ft_memcpy.c"

MU_TEST(memcpy_returnmem1)
{
	//arrange
	char 	s1[] = "";
	char 	s2[] = "he";
	char 		*actualresult;
	char		*expectedresult;
	//act
	ft_memcpy(s1, s2, 2);
	expectedresult = "he";
	actualresult = s1;
	//assert
	mu_assert_string_eq(expectedresult, actualresult);
}

MU_TEST(memcpy_returnnull)
{
	//arrange
	char 		i[] = "";
	char 		j[] = "hello";
	char		*actualresult;
	char		*expectedresult;
	//act
	ft_memcpy(j, i, 6);
	expectedresult = "";
	actualresult = i;
	//assert
	mu_assert_string_eq(expectedresult, actualresult);
}

MU_TEST_SUITE(ft_memcpy_test_suite) 
{
	MU_RUN_TEST(memcpy_returnmem1);
	MU_RUN_TEST(memcpy_returnnull);
}