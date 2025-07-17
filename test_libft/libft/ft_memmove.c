/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsarraci <lsarraci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:47:01 by lsarraci          #+#    #+#             */
/*   Updated: 2025/07/16 19:42:41 by lsarraci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t numBytes)
{
	unsigned char		*str_dest;
	const unsigned char	*str_src;
	size_t				i;

	i = 0;
	str_dest = (unsigned char *)dest;
	str_src = (unsigned char *)src;
	if (str_dest == str_src || numBytes == 0)
		return (dest);
	if (str_dest < str_src)
	{
		while (i < numBytes)
		{
			str_dest[i] = str_src[i];
			i++;
		}
	}
	else
	{
		while (numBytes--)
			str_dest[numBytes] = str_src[numBytes];
	}
	dest = (void *)str_dest;
	return (dest);
}

/*#include<stdio.h>

int	main(void)
{
	char	src1[] = "Leandro";
	char	dest1[] = "alguém";

	ft_memmove(dest1, src1, 3);
	printf("sem sobreposição: \n");
	printf(" src1: = \"%s\"\n", src1);
	printf(" dest1 = \"%s\"\n\n", dest1);
}*/
