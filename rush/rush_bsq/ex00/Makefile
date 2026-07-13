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

SOURCES = src/main.c 

OBJECTS = $(SOURCE.c=.c)

CFLAGS = -Werror -Wall -Wextra -I includes

all: ${NAME}

${NAME}: ${OBJECTS}
	${CC} ${CFLAG} ${OBJECTS} -o ${NAME} 
	
clean:
	${RM} ${OBJECTS}

fclean: clean
	${RM} ${NAME}
	
re: fclean all

.PHONY all clean fclean re
