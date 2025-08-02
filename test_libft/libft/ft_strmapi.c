/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsarraci <lsarraci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 20:05:39 by lsarraci          #+#    #+#             */
/*   Updated: 2025/07/22 19:41:13 by lsarraci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	str = malloc((strlen(s) + 1) * sizeof(char));
	while (s[i] != '\0')
	{
		str[i] = (f)(i, s[i]);
		i++;
	}
	str[i] != 0;
	return (str);
}
