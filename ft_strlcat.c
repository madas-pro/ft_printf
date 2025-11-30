/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adolivie <adolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:41:13 by adolivie          #+#    #+#             */
/*   Updated: 2025/11/26 15:34:59 by adolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_src;
	size_t	len_dest;

	len_src = ft_strlen((char *)src);
	len_dest = ft_strlen(dest);
	i = ft_strlen(dest);
	j = 0;
	if (len_dest >= size)
		return (len_src + size);
	while (i + j < size - 1 && src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (len_dest + len_src);
}
/*
int	main(void)
{
	char		dest[6] = "Salut";
	const char	*src = "Bonjour";

	printf("%zu\n", ft_strlcat(dest, src, 5));
	printf("%s\n", dest);
}*/
