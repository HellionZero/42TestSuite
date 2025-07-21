/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsarraci <lsarraci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:48:11 by lsarraci          #+#    #+#             */
/*   Updated: 2025/07/21 17:23:10 by lsarraci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_trimmer(char *ch, const char c)
{
	int	i;

	i = 0;
	while (ch[i] != 0)
	{
		if (ch[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		j;
	size_t		h;
	size_t		count;
	char		*str;

	i = strlen(s1);
	j = 0;
	h = 0;
	while (ft_trimmer((char *)s1, set++))
		i--;
	while (ft_trimmer((char *)s1, set++))
		j++;
	count = i - j;
	str = malloc(count + 1);
	while (h < count)
	{
		str[h] = s1[j];
		h++;
	}
	str[h] = 0;
	return (str);
}

/*#include<stdio.h>

int	main(void)
{
	char	ch[] = "hoje vamos terminar isso";
	char	find[] = "te";

	printf("%s\n", ft_strtrim(ch, find));
	return (0);
}*/
