/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsarraci <lsarraci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 18:23:07 by lsarraci          #+#    #+#             */
/*   Updated: 2025/07/21 16:29:43 by lsarraci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"

char	*ft_strdup(char *src)
{
	size_t		i;
	size_t		j;
	char		*dest;

	if (src == NULL)
		return (NULL);
	j = ft_strlen(src);
	dest = malloc(j);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < j)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
