/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsarraci <lsarraci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:17:12 by lsarraci          #+#    #+#             */
/*   Updated: 2025/07/23 12:31:07 by lsarraci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(big);
	j = 0;
	if (little[0] == 0)
		return ((char *)big);
	while (big[i] != 0 && i < len)
	{
		while (big[i + j] == little[j] && big[i + j] != 0 && i + j < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)big + i);
		}
		i++;
		j = 0;
	}
	return (0);
}
