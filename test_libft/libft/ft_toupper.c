/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsarraci <lsarraci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:39:13 by lsarraci          #+#    #+#             */
/*   Updated: 2025/07/15 19:18:16 by lsarraci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/*int	main(void)
{
	int		ce;
	int		cp;
	char	*phrase;

	ce = 'C';
	cp = ft_toupper('C');
	phrase = "transformar maiuscula em minuscula: esperado: ";
	printf("%s%d", phrase, ce);
	if (ce == cp)
		printf(" recebido: %d\n\e[0;32mpassou!", cp);
	else
		printf("\e[0;31mERROU!");
}*/
