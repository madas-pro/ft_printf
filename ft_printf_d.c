/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adolivie <adolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 01:02:36 by adolivie          #+#    #+#             */
/*   Updated: 2025/12/05 10:53:02 by adolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_d(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		count = write(1, "-2147483648", 11);
		return (count);
	}
	if (n < 0)
	{
		count = write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		count += ft_printf_d(n / 10);
	}
	ft_putchar_fd(n % 10 + '0', 1);
	count += 1;
	return (count);
}
