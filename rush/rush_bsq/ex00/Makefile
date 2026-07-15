# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alnoukan <alnoukan@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/13 11:43:49 by tschwab           #+#    #+#              #
#    Updated: 2026/07/15 14:48:45 by alnoukan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

CC = gcc

RM = rm -f

SOURCES = srcs/main.c \
	srcs/bsq.c \
	srcs/solver.c \
	srcs/parsing.c \
	srcs/parse_helpers.c \
	srcs/parse_utilities.c \
	srcs/validate.c 

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
