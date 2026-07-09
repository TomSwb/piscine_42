# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tschwab <marvin@42lausanne.ch>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/07 14:49:57 by tschwab           #+#    #+#              #
#    Updated: 2026/07/07 15:54:59 by tschwab          ###   ####lausanne.ch    #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

SOURCES = srcs/ft_putchar.c \
	srcs/ft_swap.c \
	srcs/ft_putstr.c \
	srcs/ft_strlen.c \
	srcs/ft_strcmp.c

OBJECTS = $(SOURCES:.c=.o)

CFLAGS = -Wall -Werror -Wextra -I includes

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rcs	$(NAME) $(OBJECTS)

clean: 
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
