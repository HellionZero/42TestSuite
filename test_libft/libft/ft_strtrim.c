/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsarraci <lsarraci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:48:11 by lsarraci          #+#    #+#             */
/*   Updated: 2025/07/17 13:48:36 by lsarraci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//int	ft_strlen(char *ch);

int	ft_char_counter(char *ch, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (ch != '\0')
	{
		if (ch[i] == c)
			count++;
		i++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		count;
	int		lenstr;
	char	*str;

	lenstr = ft_strlen((char *)s1);
	i = 0;
	j = 0;
	while (set[i] != '\0')
	{
		count = (ft_char_counter(s1, set[i]));
		j = j + count;
		i++;
	}
	str = malloc((lenstr - j) * sizeof(char));
	while (s1[i] != '\0')
	{
		if (*s1 != *set)
		{
			str[i] = s1[count];
			count++;
		}
	}
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
