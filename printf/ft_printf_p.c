/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adolivie <adolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 01:02:24 by adolivie          #+#    #+#             */
/*   Updated: 2025/11/30 16:02:46 by adolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_conv_x(int nbr)
{
	int		count;
	char	*base;

	count = 0;
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	if (nbr >= 16)
		ft_conv_x(nbr / 16, is_x_maj);
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
		count = ft_print_str("(nil)");
		return (count);
	}
	adr = (size_t)ptr;
	count = ft_print_str("0x");
	len += ft_conv_x(adr);
	return (count);
}
