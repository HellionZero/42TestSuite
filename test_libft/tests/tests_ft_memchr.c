#include "minunit.h"
#include "libft.h"
#include "../libft/ft_memchr.c"

MU_TEST(memchr_returnmem1)
{
	//arrange
	char 	s1[] = "hoje vou pegar voces";
	char 	s2 = 'v';
	char 		*actualresult;
	char		*expectedresult;
	//act
	
	expectedresult = "vou pegar voces";
	actualresult = ft_memchr(s1, s2, ft_strlen(s1));;
	//assert
	mu_assert_string_eq(expectedresult, actualresult);
}

MU_TEST(memchr_returnnull)
{
	//arrange
	char 		s1[] = "hoje vou pegar voces";
	char 		s2 = 'q';
	char		*actualresult;
	char		*expectedresult;
	//act
	ft_memchr(s1, s2, ft_strlen(s1));
	expectedresult = 0;
	actualresult = ft_memchr(s1, s2, ft_strlen(s1));
	//assert
	mu_assert_string_eq(expectedresult, actualresult);
}

MU_TEST_SUITE(ft_memchr_test_suite)
{
	MU_RUN_TEST(memchr_returnmem1);
	MU_RUN_TEST(memchr_returnnull);
}