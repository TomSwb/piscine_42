# **************************************************************************** #
#                                                                              #
#                                                          ::::::::            #
#    Makefile                                            :+:    :+:            #
#                                                       +:+                    #
#    By: tschwab <marvin@42.fr>                        +#+                     #
#                                                     +#+                      #
#    Created: 2026/07/11 09:15:51 by tschwab        #+#    #+#                 #
#    Updated: 2026/07/11 09:15:52 by tschwab        ########   odam.nl         #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

CC = gcc

RM = rm -f

SOURCES = srcs/main.c \
	srcs/helpers.c \
	srcs/error.c \
	srcs/parsing.c
	

OBJECTS = $(SOURCES:.c=.o)

CFLAGS = -Wall -Werror -Wextra -I includes

all: $(NAME)

$(NAME): $(OBJECTS)
	 ${CC} ${CFLAGS} ${OBJECTS} -o ${NAME} 

clean: 
	${RM} ${OBJECTS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
