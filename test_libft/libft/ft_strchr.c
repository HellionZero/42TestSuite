/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsarraci <lsarraci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:43:47 by lsarraci          #+#    #+#             */
/*   Updated: 2025/07/22 15:49:52 by lsarraci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int character)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != 0)
	{
		if (str[i] == (char)character)
			return (str + i);
		i++;
	}
	if (str[i] == (char)character)
		return (str + i);
	return (0);
}

/*int	main(void)
{
	char	*phrase;
	char	*ch;

	phrase = "hoje vamos ter janta";
	ch = ft_strchr(phrase, 'v');
	printf("%s\n", ch);
}*/
