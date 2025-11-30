/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adolivie <adolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 12:05:02 by adolivie          #+#    #+#             */
/*   Updated: 2025/11/26 17:16:14 by adolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	str[10];

	printf("%s\n", str);
	ft_memcpy(str, "AbcDef", 2);
	printf("%s\n", str);
	ft_memcpy(str, "AbcDef", 3);
	printf("%s\n", str);
	ft_memcpy(str, "AbcDef", 4);
	printf("%s\n", str);
	ft_memcpy(str, "AbcDef", 5);
	printf("%s\n", str);
	ft_memcpy(str, "AbcDef", 6);
	printf("%s\n", str);
	ft_memcpy(str, "AbcDef", 7);
	printf("%s\n", str);
}*/