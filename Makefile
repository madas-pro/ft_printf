# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adolivie <adolivie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/21 06:26:04 by adolivie          #+#    #+#              #
#    Updated: 2025/12/05 10:42:35 by adolivie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC			=	ft_putchar_fd.c \
				ft_printf.c \
                ft_printf_.c \
                ft_printf_c.c \
                ft_printf_d.c \
                ft_printf_p.c \
                ft_printf_s.c \
                ft_printf_u.c \
                ft_printf_x.c \
				ft_strlen.c
				
OBJ			= $(SRC:.c=.o)

# Pour créer l'archive .a
AR			= ar rcs

# **************************************************************************** #
#                                 REGLES                                        #
# **************************************************************************** #

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
