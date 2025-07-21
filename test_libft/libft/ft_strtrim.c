/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsarraci <lsarraci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:48:11 by lsarraci          #+#    #+#             */
/*   Updated: 2025/07/21 14:15:38 by lsarraci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_trimchar(const char *ch, char c)
{
	int	i;

	i = 0;
	while (ch[i] != '\0')
	{
		if (ch[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_returnstr(const char *str1, size_t start, size_t len)
{
	char	*str2;
	size_t	i;

	if (len <= 0 || start >= ft_strlen((char *)str1))
		return (ft_strdup(""));
	str2 = calloc(len + 1, sizeof(char));
	if (!str1)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str2[i] = str1[start + i];
		i++;
	}
	return (str2);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen((char *)s1) - 1;
	if (ft_strlen((char *)s1) == 0)
		return (ft_strdup(""));
	while (ft_trimchar(set, s1[i]))
		i++;
	while (ft_trimchar(set, s1[j]))
		j--;
	return (ft_returnstr(str, i, j - (i - 1)));
}

/*#include<stdio.h>

int	main(void)
{
	char	ch[] = "hoje vamos terminar isso";
	char	find[] = "te";

	printf("%s\n", ft_strtrim(ch, find));
	return (0);
}*/
