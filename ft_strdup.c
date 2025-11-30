/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adolivie <adolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 11:54:03 by adolivie          #+#    #+#             */
/*   Updated: 2025/11/26 15:32:59 by adolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	char	*ptr;
	int		i;

	ptr = malloc(ft_strlen((char *)string) + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (string[i])
	{
		ptr[i] = string[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char	*string;
	char	*newstr;

	string = "this is a copy";
	if ((newstr = ft_strdup(string)) != NULL)
		printf("The new string is: %s\n", newstr);
	return (0);
	free(newstr);
}*/
