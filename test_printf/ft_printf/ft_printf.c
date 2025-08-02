/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsarraci <lsarraci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 13:42:52 by lsarraci          #+#    #+#             */
/*   Updated: 2025/08/01 17:35:11 by lsarraci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	ft_printf(const char *fstring, ...)
{
	int	i;

	i = 0;
	while (fstring[i] != '\0')
	{
		ft_putchar(fstring[i]);
		i++;
	}
	return (0);
}

/* diretrizes da função :
- pegar o número de argumentos.
*/
