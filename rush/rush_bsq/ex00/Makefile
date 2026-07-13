# **************************************************************************** #
#                                                                              #
#                                                          ::::::::            #
#    Makefile                                            :+:    :+:            #
#                                                       +:+                    #
#    By: tschwab <marvin@42.fr>                        +#+                     #
#                                                     +#+                      #
#    Created: 2026/07/13 11:43:49 by tschwab        #+#    #+#                 #
#    Updated: 2026/07/13 11:43:50 by tschwab        ########   odam.nl         #
#                                                                              #
# **************************************************************************** #

NAME = bsq

CC = gcc

RM = rm -f

SOURCES = srcs/main.c \
	srcs/parsing.c \
	srcs/parse_helpers.c

OBJECTS = $(SOURCES:.c=.o)

CFLAGS = -Wall -Werror -Wextra -I includes -g3

all: $(NAME)

$(NAME): $(OBJECTS)
	 ${CC} ${CFLAGS} ${OBJECTS} -o ${NAME} 

clean: 
	${RM} ${OBJECTS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
