#include <fcntl.h>
#include "minunit.h"

#include "ft_printf.h"
#include "libft/libft.h"

#include "tests_ft_printf.c"


int main() {

	MU_RUN_SUITE(ft_printf_test_suite);

	MU_REPORT();
	return (MU_EXIT_CODE);
}
