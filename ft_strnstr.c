/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adolivie <adolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 21:12:07 by adolivie          #+#    #+#             */
/*   Updated: 2025/11/26 16:00:56 by adolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*little)
		return ((char *)big);
	while (i < len && big[i])
	{
		if (big[i])
		{
			j = 0;
			while ((little[j] == big[i + j] && i + j < len))
			{
				if (little[j + 1] == '\0')
					return ((char *)(big + i));
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	printf("%s\n", ft_strnstr("abcde", "b", 4));   // test lettre
	printf("%s\n", ft_strnstr("abcde", "bcd", 4)); // test str
	printf("%s\n", ft_strnstr("abcde", "bd", 4));  // test str diff
	printf("%s\n", ft_strnstr("abcde", "z", 4));   // test lettre diff
	printf("%s\n", ft_strnstr("abcde", "e", 2));   // test lettre oor
	printf("%s\n", ft_strnstr("abcde", "z", 15));  // test len > big
	printf("%s\n", ft_strnstr("abcde", "", 4));    // test little vide
}*/