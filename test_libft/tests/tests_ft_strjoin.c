#include "minunit.h"
#include "libft.h"
#include "../libft/ft_strjoin.c"

MU_TEST(join_hello_and_world_to_helloworld)
{
	//arrange
	char 	*i = "hello";
	char 	*j = " world";
	char 		*actualresult;
	char		*expectedresult;
	//act
	expectedresult = "hello world";
	actualresult = ft_strjoin(i, j);
	//assert
	mu_assert_string_eq(expectedresult, actualresult);
}

MU_TEST(join_helloworld_to_void)
{
	//arrange
	char 	*i = "hello, world!!!!!";
	char 	*j = "";
	char		*actualresult;
	char		*expectedresult;
	//act
	expectedresult = "hello, world!!!!!";;
	actualresult = ft_strjoin(i, j);
	//assert
	mu_assert_string_eq(expectedresult, actualresult);
}



MU_TEST_SUITE(ft_strjoin_test_suite) 
{
	MU_RUN_TEST(join_hello_and_world_to_helloworld);
	MU_RUN_TEST(join_helloworld_to_void);

}