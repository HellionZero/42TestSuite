/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsarraci <lsarraci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 11:58:56 by lsarraci          #+#    #+#             */
/*   Updated: 2025/07/23 12:35:19 by lsarraci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*s3;
	size_t		count;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	count = ft_strlen((char *)s2) + ft_strlen((char *)s1);
	s3 = malloc(count + 1);
	while (s1[i] != 0)
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j] != 0)
	{
		s3[i + j] = s2[j];
		j++;
	}
	s3[i + j] = 0;
	return (s3);
	free(s3);
}

/*#include<stdio.h>

int	main(void)
{
	const char	line1[] = "hoje";
	const char	line2[] = " vamos";
	
	printf("%s\n", ft_strjoin(line1, line2));
	return (0);
}*/
