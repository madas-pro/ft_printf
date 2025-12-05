/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adolivie <adolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 01:02:18 by adolivie          #+#    #+#             */
/*   Updated: 2025/12/05 11:12:25 by adolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_u(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
	{
		count += ft_printf_u(n / 10);
	}
	ft_putchar_fd(n % 10 + '0', 1);
	count += 1;
	return (count);
}
