/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adolivie <adolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 01:02:24 by adolivie          #+#    #+#             */
/*   Updated: 2025/12/05 11:10:45 by adolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_conv_x(int nbr)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (nbr >= 16)
		count += ft_conv_x(nbr / 16);
	ft_putchar_fd(base[nbr % 16], 1);
	count++;
	return (count);
}

int	ft_printf_p(void *ptr)
{
	int				count;
	unsigned long	adr;

	count = 0;
	if (!ptr)
		return (write(1, "(nil)", 5));
	adr = (unsigned long)ptr;
	count += write(1, "0x", 2);
	count += ft_conv_x(adr);
	return (count);
}
