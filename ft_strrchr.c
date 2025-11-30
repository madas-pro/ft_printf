/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adolivie <adolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 13:28:32 by adolivie          #+#    #+#             */
/*   Updated: 2025/11/26 15:41:12 by adolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *str, int c)
{
	int				i;
	char			*result;
	int				found;
	unsigned char	p;

	i = 0;
	found = 0;
	p = (unsigned char)c;
	while (str[i] != '\0')
	{
		if (str[i] == p)
		{
			result = (char *)str + i;
			found = 1;
		}
		i++;
	}
	if (found == 1)
		return (result);
	if (p == '\0')
		return ((char *)str + i);
	return (NULL);
}
/*
int	main(void)
{
	char	a[10] = "Bonjour";

	printf("%s\n", strrchr(a, 'o'));
}*/
