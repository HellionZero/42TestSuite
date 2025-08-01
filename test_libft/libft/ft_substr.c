/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsarraci <lsarraci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:59:45 by lsarraci          #+#    #+#             */
/*   Updated: 2025/07/22 19:58:37 by lsarraci         ###   ########.fr       */
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
		sub = malloc((size - (int)start + 1) * sizeof(char));
		ft_strlcpy(sub, s + start, (size_t)(size - start));
	}
	if (len < size - start)
		ft_strlcpy(sub, s + start, len);
	return (sub);
}
