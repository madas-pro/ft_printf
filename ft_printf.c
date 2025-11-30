/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adolivie <adolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 01:00:14 by adolivie          #+#    #+#             */
/*   Updated: 2025/11/30 16:27:41 by adolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	int		count;
	va_list	ap;

	if (!format)
		return (-1);
	i = 0;
	count = 0;
	va_start(ap, format);
	len = ft_strlen(format);
	while (i < len)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
				count += ft_printf_();
			else if (format[i] == 'c')
				count += ft_printf_c(va_arg(ap, int));
			else if (format[i] == 'd' || format[i] == 'i')
				count += ft_printf_d(va_arg(ap, int));
			else if (format[i] == 'p')
				count += ft_printf_p(va_arg(ap, void *));
			else if (format[i] == 's')
				count += ft_printf_s(va_arg(ap, char *));
			else if (format[i] == 'u')
				count += ft_printf_u(va_arg(ap, unsigned int));
			else if (format[i] == 'x')
				count += ft_printf_x(va_arg(ap, int), 0);
			else if (format[i] == 'X')
				count += ft_printf_x(va_arg(ap, int), 1);
			else
				return (-1);
			i++;
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			i++;
			count++;
		}
	}
	va_end(ap);
	return (count);
}
int	main(void)
{
	printf("lettre :%c\n", 'a');
}