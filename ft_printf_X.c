/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_X.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adolivie <adolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 01:01:58 by adolivie          #+#    #+#             */
/*   Updated: 2025/11/30 14:36:38 by adolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// int	ft_printf_X(int nbr, int x)
// {
// 	int		count;
// 	char	*base;

// 	base = "0123456789ABCDEF";
// 	count = 0;
// 	if (nbr < 0)
// 	{
// 		count++;
// 		nbr = -nbr;
// 	}
// 	while (nbr >= 16)
// 	{
// 		nbr = nbr / 16;
// 		ft_putchar_fd(base[nbr % 16], 1);
// 		count++;
// 	}
// 	return (count + 1);
// }