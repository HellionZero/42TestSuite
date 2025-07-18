/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsarraci <lsarraci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:49:37 by lsarraci          #+#    #+#             */
/*   Updated: 2025/07/18 17:40:05 by lsarraci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	signal;

	i = 0;
	signal = 0;
	nbr = 0;
	while (ft_isspace(str[i]))
		i++;
	while (str[i] == '+' || str [i] == '-')
	{
		if (str [i] == '-')
			signal = -signal;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
			nbr *= 10;
			nbr += str[i] - 48;
			i++;
	}
	return (nbr * signal);
}

/*int	main(void)
{
	int	nb;

	nb = ft_atoi("   --++---342");
	printf("%d\n", nb);
}*/
