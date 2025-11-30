/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adolivie <adolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 01:58:00 by adolivie          #+#    #+#             */
/*   Updated: 2025/11/25 12:18:12 by adolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen_itoa(int n)
{
	int	i;

	i = 1;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa_quepourceptitfdpdeintmin(char *ptr)
{
	ptr[0] = '-';
	ptr[1] = '2';
	ptr[2] = '1';
	ptr[3] = '4';
	ptr[4] = '7';
	ptr[5] = '4';
	ptr[6] = '8';
	ptr[7] = '3';
	ptr[8] = '6';
	ptr[9] = '4';
	ptr[10] = '8';
	ptr[11] = '\0';
	return (ptr);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		i;
	int		len;

	len = ft_strlen_itoa(n);
	ptr = malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	i = len - 1;
	if (n == -2147483648)
		return (ft_itoa_quepourceptitfdpdeintmin(ptr));
	if (n < 0)
	{
		n = -n;
		ptr[0] = '-';
	}
	while (n >= 10)
	{
		ptr[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	ptr[i] = n + '0';
	ptr[len] = '\0';
	return (ptr);
}

// int	main(void)
// {
// 	char	*str;

// 	str = ft_itoa(214);
// 	printf("%s\n", str);
// 	free(str);
// 	str = ft_itoa(2);
// 	printf("%s\n", str);
// 	free(str);
// 	str = ft_itoa(-0);
// 	printf("%s\n", str);
// 	free(str);
// 	str = ft_itoa(2147483647);
// 	printf("%s\n", str);
// 	free(str);
// 	str = ft_itoa(-2147483648);
// 	printf("%s\n", str);
// 	free(str);
// 	str = ft_itoa(-2);
// 	printf("%s\n", str);
// 	free(str);
// 	str = ft_itoa(-23);
// 	printf("%s\n", str);
// 	free(str);
// }
