/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsarraci <lsarraci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:59:45 by lsarraci          #+#    #+#             */
/*   Updated: 2025/07/16 12:17:59 by lsarraci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;
	int		j;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < start && s != '\0')
		i++;
	sub = malloc(len * sizeof(char));
	if (len > (i - (ft_strlen(s))))
		return (NULL);
	j = 0;
	if (sub == NULL)
		return (NULL);
	while (j < ft_strlen(sub))
		sub[i] = s[i + j];
		j++;
	return (sub);
}
