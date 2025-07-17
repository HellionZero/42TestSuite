/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsarraci <lsarraci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:55:18 by lsarraci          #+#    #+#             */
/*   Updated: 2025/07/15 19:18:02 by lsarraci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	int		pos;

	i = 0;
	pos = 0;
	while (str[i] != 0)
	{
		if (str[i] == (char)c)
			pos = i;
		i++;
	}
	return ((char *)(str + pos));
}
