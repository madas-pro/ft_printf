/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adolivie <adolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 04:02:09 by adolivie          #+#    #+#             */
/*   Updated: 2025/11/30 16:30:16 by adolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

/* strings */
size_t	ft_strlen(const char *s);

/* memory */
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);

/* string copy/concat */
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/* char transformations */
int		ft_toupper(int c);
int		ft_tolower(int c);

/* search in string */
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);

/* compare */
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/* substring search */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/* conversion */
int		ft_atoi(const char *str);

/* malloc */
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *string);

/* fonctions originales */
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

/* printf */
int		ft_printf(const char *format, ...);
int		ft_printf_(void);
int		ft_printf_c(int c);
int		ft_printf_d(int d);
int		ft_printf_p(void *ptr);
int		ft_printf_s(char *str);
int		ft_printf_u(unsigned int d);
int		ft_printf_x(int nbr, int is_x_maj);

#endif
