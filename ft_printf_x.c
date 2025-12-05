/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adolivie <adolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 01:02:15 by adolivie          #+#    #+#             */
/*   Updated: 2025/12/05 12:35:36 by adolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_x(unsigned int nbr, int is_x_maj)
{
	int		count;
	char	*base;

	count = 0;
	if (is_x_maj == 1)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (nbr >= 16)
		count += ft_printf_x(nbr / 16, is_x_maj);
	ft_putchar_fd(base[nbr % 16], 1);
	count++;
	return (count);
}
