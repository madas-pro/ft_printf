/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adolivie <adolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 20:56:02 by adolivie          #+#    #+#             */
/*   Updated: 2025/11/26 16:33:53 by adolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
	{
		return (0);
	}
	while (i < n - 1 && s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main(void)
{
	printf("%d\n", ft_strncmp("abd", "", 3));
	printf("%d\n", ft_strncmp("abd", "abc", 2));
	printf("%d\n", ft_strncmp("azd", "abq", 1));
	printf("%d\n", ft_strncmp("abc", "abc", 7));
	printf("%d\n", ft_strncmp("abd", "abc", 3));
	printf("%d\n", ft_strncmp("abd", "abc", 2));
	printf("%d\n", ft_strncmp("abd", "abc", 0));
	printf("%d\n", ft_strncmp("abd", "abc", 5));
}*/
