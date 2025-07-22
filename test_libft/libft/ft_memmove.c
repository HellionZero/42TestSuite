/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsarraci <lsarraci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:47:01 by lsarraci          #+#    #+#             */
/*   Updated: 2025/07/22 17:17:45 by lsarraci         ###   ########.fr       */
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
		str_dest[i] = 0;
	}
	else
	{
		while (numBytes--)
			str_dest[numBytes] = str_src[numBytes];
	}
	dest = (void *)str_dest;
	return (dest);
}
