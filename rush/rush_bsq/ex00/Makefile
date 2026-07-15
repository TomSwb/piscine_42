# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tschwab <tschwab@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/13 11:43:49 by tschwab           #+#    #+#              #
#    Updated: 2026/07/15 18:09:35 by tschwab          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

CC = gcc

RM = rm -f

SOURCES = srcs/main.c \
	srcs/bsq.c \
	srcs/solver.c \
	srcs/solver_utilities.c \
	srcs/parsing.c \
	srcs/parse_helpers.c \
	srcs/parse_utilities.c \
	srcs/validate.c \
	srcs/free.c

OBJECTS = $(SOURCES:.c=.o)

CFLAGS = -Wall -Werror -Wextra -I includes -g3 -fsanitize=address

all: $(NAME)

$(NAME): $(OBJECTS)
	 ${CC} ${CFLAGS} ${OBJECTS} -o ${NAME} 

clean: 
	${RM} ${OBJECTS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
