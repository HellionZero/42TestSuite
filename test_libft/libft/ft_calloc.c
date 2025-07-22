/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsarraci <lsarraci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 18:07:14 by lsarraci          #+#    #+#             */
/*   Updated: 2025/07/22 14:51:31 by lsarraci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	unsigned char	*p;
	size_t			bytesize;
	size_t			i;

	i = 0;
	bytesize = nitems * size;
	p = malloc(bytesize);
	if (p != NULL)
		return (NULL);
	while (i < bytesize)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
