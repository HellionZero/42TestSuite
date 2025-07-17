/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsarraci <lsarraci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:49:37 by lsarraci          #+#    #+#             */
/*   Updated: 2025/07/17 17:33:43 by lsarraci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib/minunit.h"
#include "libft/libft.h"

MU_TEST(test_check) 
{
	mu_assert_int_eq(1, ft_isdigit('3'));
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(test_check);
}

int	main(void) {
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return (MU_EXIT_CODE);
}