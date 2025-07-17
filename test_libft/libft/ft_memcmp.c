/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsarraci <lsarraci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:01:57 by lsarraci          #+#    #+#             */
/*   Updated: 2025/07/16 17:56:54 by lsarraci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *pointer1, void *pointer2, size_t size)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)pointer1;
	p2 = (unsigned char *)pointer2;
	i = 0;
	while (i < size)
	{
		if (p1 != p2)
		{
			if (p1 > p2)
				return (1);
			else if (p1 < p2)
				return (-1);
		}
		return (0);
		i++;
	}
	return (0);
}
