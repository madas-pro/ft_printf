/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adolivie <adolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 12:56:01 by adolivie          #+#    #+#             */
/*   Updated: 2025/11/26 15:41:38 by adolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *str, int c)
{
	int				i;
	unsigned char	p;

	i = 0;
	p = (unsigned char)c;
	while (str[i] != '\0' && str[i] != p)
		i++;
	if (str[i] == '\0' && p != '\0')
		return (NULL);
	return ((char *)&str[i]);
}
/*
int	main(void)
{
	char a[10] = "Bonjour";
	printf("%s\n", strchr(a, 'j'));
}*/