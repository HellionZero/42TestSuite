/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsarraci <lsarraci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:20:39 by lsarraci          #+#    #+#             */
/*   Updated: 2025/07/22 14:48:15 by lsarraci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "libft.h"

size_t	ft_strlcat( char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	if (!dst)
		return (0);
	dst_len = (size_t)ft_strlen(dst);
	src_len = (size_t)ft_strlen((char *)src);
	j = 0;
	i = dst_len;
	if (!src)
		return (dst_len);
	if (i < size - 1 && size > 0)
	{
		while (src[j] != '\0' && i + j < size - 1)
		{
			dst[i + j] = src[j];
			j++;
		}
		dst[i + j] = '\0';
	}
	if (dst_len >= size)
		dst_len = size;
	return (dst_len + src_len);
}

/*int	main(void)
{
	char		*str1;
	const char	*str2;
	size_t		sz;
	size_t		i;

	i = 0;
	str1 = "hoje ta tudo bem";
	str2 = " por aqui";
	sz = ft_strlcat(str1, str2, 12);

	while (i < sz)
	{
		printf("%c", str1[i]);
		i++;
	}
}*/
