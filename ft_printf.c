/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adolivie <adolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 01:00:14 by adolivie          #+#    #+#             */
/*   Updated: 2025/12/05 10:27:06 by adolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_handle_format(char c, va_list ap, int *count)
{
	if (c == '%')
		*count += ft_printf_();
	else if (c == 'c')
		*count += ft_printf_c(va_arg(ap, int));
	else if (c == 'd' || c == 'i')
		*count += ft_printf_d(va_arg(ap, int));
	else if (c == 'p')
		*count += ft_printf_p(va_arg(ap, void *));
	else if (c == 's')
		*count += ft_printf_s(va_arg(ap, char *));
	else if (c == 'u')
		*count += ft_printf_u(va_arg(ap, unsigned int));
	else if (c == 'x')
		*count += ft_printf_x(va_arg(ap, int), 0);
	else if (c == 'X')
		*count += ft_printf_x(va_arg(ap, int), 1);
	else
		return (-1);
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		count;

	if (!format)
		return (-1);
	va_start(ap, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			if (ft_handle_format(format[i], ap, &count) == -1)
				return (va_end(ap), -1);
		}
		else
			count += ft_printf_c(format[i]);
		i++;
	}
	va_end(ap);
	return (count);
}
