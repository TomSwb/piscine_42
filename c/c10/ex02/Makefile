# **************************************************************************** #
#                                                                              #
#                                                          ::::::::            #
#    Makefile                                            :+:    :+:            #
#                                                       +:+                    #
#    By: tschwab <marvin@42.fr>                        +#+                     #
#                                                     +#+                      #
#    Created: 2026/07/09 15:05:41 by tschwab        #+#    #+#                 #
#    Updated: 2026/07/09 15:05:43 by tschwab        ########   odam.nl         #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail

CC = gcc

RM = rm -f

SOURCES = srcs/main.c \
	srcs/helpers.c \
	srcs/errors.c \
	srcs/tail.c 

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
