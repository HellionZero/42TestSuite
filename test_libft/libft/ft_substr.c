/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsarraci <lsarraci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:59:45 by lsarraci          #+#    #+#             */
/*   Updated: 2025/07/22 15:39:54 by lsarraci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*sub;
	int			size;

	size = (ft_strlen((char *)s));
	if ((int)start > size)
	{
		sub = malloc(1);
		sub[0] = '\0';
		return (sub);
	}
	if (len >= size - start)
	{
		sub = malloc(size - (int)start + 1);
		ft_strlcpy(sub, s + start, size - start);
	}
	if (len < size - start)
		ft_strlcpy(sub, s + start, len);
	return (sub);
}
