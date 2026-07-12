# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpiervit <mpiervit@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/11 09:15:51 by tschwab           #+#    #+#              #
#    Updated: 2026/07/12 16:37:02 by mpiervit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

CC = gcc

RM = rm -f

SOURCES = src/main.c \
	src/helpers.c \
	src/error.c \
	src/check.c \
	src/parsing.c \
	src/output.c

OBJECTS = $(SOURCES:.c=.o)

CFLAGS = -Wall -Werror -Wextra -I includes -g

all: $(NAME)

$(NAME): $(OBJECTS)
	 ${CC} ${CFLAGS} ${OBJECTS} -o ${NAME} 

clean: 
	${RM} ${OBJECTS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
