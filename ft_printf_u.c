/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adolivie <adolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 01:02:18 by adolivie          #+#    #+#             */
/*   Updated: 2025/11/30 16:44:48 by adolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_unsigned_nbr(unsigned int nbr)
{
	int	count;

	count = 0;
	while (nbr >= 10)
	{
		nbr = nbr / 10;
		count++;
	}
	return (count + 1);
}

int	ft_printf_u(unsigned int d)
{
	ft_putnbr_fd(d, 1);
	return (ft_count_unsigned_nbr(d));
}
