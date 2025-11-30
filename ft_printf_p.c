/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adolivie <adolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 01:02:24 by adolivie          #+#    #+#             */
/*   Updated: 2025/11/30 16:43:54 by adolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_conv_x(int nbr)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	if (nbr >= 16)
		ft_conv_x(nbr / 16);
	ft_putchar_fd(base[nbr % 16], 1);
	count++;
	return (count + 1);
}

int	ft_printf_p(void *ptr)
{
	int		count;
	size_t	adr;

	count = 0;
	if (ptr == NULL)
	{
		count = ft_printf_s("(nil)");
		return (count);
	}
	adr = (size_t)ptr;
	count = ft_printf_s("0x");
	count += ft_conv_x(adr);
	return (count);
}
