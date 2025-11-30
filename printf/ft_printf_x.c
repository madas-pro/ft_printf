/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adolivie <adolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 01:02:15 by adolivie          #+#    #+#             */
/*   Updated: 2025/11/30 14:37:53 by adolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf_x(int nbr, int is_x_maj)
{
	int		count;
	char	*base;

	count = 0;
	if (is_x_maj == 1)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	while (nbr >= 16)
	{
		nbr = nbr / 16;
		ft_putchar_fd(base[nbr % 16], 1);
		count++;
	}
	return (count + 1);
}
