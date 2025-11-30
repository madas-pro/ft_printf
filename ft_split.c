/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adolivie <adolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 12:12:57 by adolivie          #+#    #+#             */
/*   Updated: 2025/11/25 12:10:55 by adolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_count_words(char *str, char c)
{
	int	i;
	int	reset;
	int	count;

	i = 0;
	reset = 0;
	count = 0;
	while (str[i])
	{
		if ((str[i] != c) && (reset == 0))
		{
			count++;
			reset = 1;
		}
		else if (str[i] == c)
			reset = 0;
		i++;
	}
	return (count);
}

int	ft_strlen_split(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	return (i);
}

char	*ft_strdup_split(const char *string, char c)
{
	char	*ptr;
	int		i;
	int		len;

	len = ft_strlen_split((char *)string, c) + 1;
	ptr = malloc(len);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < (len - 1))
	{
		ptr[i] = string[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		reset;
	int		j;

	str = malloc((ft_count_words((char *)s, c) + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	i = 0;
	reset = 0;
	j = 0;
	while (s[i])
	{
		if ((s[i] != c) && (reset == 0))
		{
			str[j] = ft_strdup_split(s + i, c);
			reset = 1;
			j++;
		}
		else if (s[i] == c)
			reset = 0;
		i++;
	}
	str[j] = NULL;
	return (str);
}

// int	main(void)
// {
// 	char	**strr;
// 	int		i;

// 	strr = ft_split("xabxcxxxdefxx", 'x');
// 	i = 0;
// 	while (strr[i])
// 	{
// 		printf("%s\n", strr[i]);
// 		i++;
// 	}
// 	for (int i = 0; strr[i]; i++)
//    	free(strr[i]);
//	free(strr);
// }
