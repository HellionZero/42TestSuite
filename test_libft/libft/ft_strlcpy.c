/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsarraci <lsarraci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:59:30 by lsarraci          #+#    #+#             */
/*   Updated: 2025/07/15 19:57:44 by lsarraci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcpy(char *dest, const char *src, size_t bytes)
{
	size_t	i;

	i = 0;
	while (i < (bytes))
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (i);
}
