#include <fcntl.h>
#include "minunit.h"

#include "libft.h"

#include "tests_ft_isalpha.c"
#include "tests_ft_isdigit.c"
#include "tests_ft_atoi.c"
#include "tests_ft_memcpy.c"
#include "tests_ft_memchr.c"
#include "tests_ft_memmove.c"
#include "tests_ft_toupper.c"
#include "tests_ft_strncmp.c"
#include "tests_ft_strlcpy.c"
//#include "tests_ft_strlcat.c"
#include "tests_ft_strdup.c"
#include "tests_ft_strjoin.c"
#include "tests_ft_substr.c"
#include "tests_ft_strchr.c"
#include "tests_ft_strrchr.c"
// #include "tests_ft_strtrim.c"

int main() {

	MU_RUN_SUITE(ft_toupper_test_suite);
	MU_RUN_SUITE(ft_isalpha_test_suite);
	MU_RUN_SUITE(ft_isdigit_test_suite);
	MU_RUN_SUITE(ft_atoi_test_suite);
	MU_RUN_SUITE(ft_strlcpy_test_suite);
//	MU_RUN_SUITE(ft_strlcat_test_suite);
	MU_RUN_SUITE(ft_strdup_test_suite);
	MU_RUN_SUITE(ft_strjoin_test_suite);
	MU_RUN_SUITE(ft_substr_test_suite);
	MU_RUN_SUITE(ft_strchr_test_suite);
	MU_RUN_SUITE(ft_strrchr_test_suite);
	MU_RUN_SUITE(ft_strncmp_test_suite);
	MU_RUN_SUITE(ft_memcpy_test_suite);
	MU_RUN_SUITE(ft_memchr_test_suite);
	MU_RUN_SUITE(ft_memmove_test_suite);
//	MU_RUN_SUITE(ft_strtrim_test_suite);


	MU_REPORT();
	return (MU_EXIT_CODE);
}
