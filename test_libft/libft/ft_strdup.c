/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsarraci <lsarraci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 18:23:07 by lsarraci          #+#    #+#             */
/*   Updated: 2025/07/21 14:56:11 by lsarraci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*dest;

	if (src == NULL)
		return (NULL);
	j = ft_strlen(src);
	dest = malloc(j * sizeof(char) + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i <= j)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
