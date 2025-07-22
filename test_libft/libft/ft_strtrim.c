/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsarraci <lsarraci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:48:11 by lsarraci          #+#    #+#             */
/*   Updated: 2025/07/21 17:59:34 by lsarraci         ###   ########.fr       */
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
	size_t		start;
	size_t		ch;
	int			end;
	size_t		count;
	char		*str;

	end = strlen((char *)s1);
	start = 0;
	while (set[ch] != 0)
	{
		while (ft_trimmer((char *)s1, set[ch]))
			end--;
		while (ft_trimmer((char *)s1, set[ch]))
			start++;
		ch++;
	}
	count = end - start;
	str = ft_substr(s1, (int)start, count);
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
