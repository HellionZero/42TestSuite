/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsarraci <lsarraci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 11:58:56 by lsarraci          #+#    #+#             */
/*   Updated: 2025/07/16 19:43:10 by lsarraci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*space;
	char	*str;
	int		count;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen((char *)s1);
	str = (char *)s1;
	count = ft_strlen((char *)s2);
	space = malloc(count * sizeof(char));
	while (i + j < (j + ft_strlen(space)))
	{
		str[i + j] = s2[i];
		i++;
	}
	return (str);
}

/*#include<stdio.h>

int	main(void)
{
	const char	line1[] = "hoje";
	const char	line2[] = " vamos";
	
	printf("%s\n", ft_strjoin(line1, line2));
	return (0);
}*/
