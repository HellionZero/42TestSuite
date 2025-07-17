/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsarraci <lsarraci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 18:07:14 by lsarraci          #+#    #+#             */
/*   Updated: 2025/07/15 19:56:32 by lsarraci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n);

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*p;
	size_t	bytesize;

	p = 0;
	if (nitems == 0 || size == 0)
		return (p);
	bytesize = nitems * size;
	p = malloc(bytesize);
	if (p != NULL)
		return (NULL);
	ft_memset(p, 0, bytesize);
	return (p);
}
