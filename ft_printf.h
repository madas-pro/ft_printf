/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adolivie <adolivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 04:02:09 by adolivie          #+#    #+#             */
/*   Updated: 2025/12/05 12:31:26 by adolivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

/* strings */
size_t	ft_strlen(const char *s);

void	ft_putchar_fd(char c, int fd);

/* printf */
int		ft_printf(const char *format, ...);
int		ft_printf_(void);
int		ft_printf_c(int c);
int		ft_printf_d(int d);
int		ft_printf_p(void *ptr);
int		ft_printf_s(char *str);
int		ft_printf_u(unsigned int d);
int		ft_printf_x(unsigned int nbr, int is_x_maj);

#endif
