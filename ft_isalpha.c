/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adolivie <adolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:06:08 by adolivie          #+#    #+#             */
/*   Updated: 2025/11/14 18:19:44 by adolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int character)
{
	if (character > 64 && character < 91)
		return (1);
	else if (character > 96 && character < 123)
		return (1);
	return (0);
}
