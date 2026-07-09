# **************************************************************************** #
#                                                                              #
#                                                          ::::::::            #
#    Makefile                                            :+:    :+:            #
#                                                       +:+                    #
#    By: tschwab <marvin@42.fr>                        +#+                     #
#                                                     +#+                      #
#    Created: 2026/07/08 15:33:07 by tschwab        #+#    #+#                 #
#    Updated: 2026/07/08 15:33:09 by tschwab        ########   odam.nl         #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SOURCES = ./main.c

OBJECTS = $(SOURCES:.c=.o)

RM = rm -f

CC = gcc

CFLAGS = -Wall -Werror -Wextra -I includes

all: $(NAME)

$(NAME): $(OBJECTS)
	 ${CC} ${CFLAGS} ${OBJECTS} -o ${NAME} 

clean: 
	${RM} ${OBJECTS}

fclean: clean
	${RM} ${NAME}
	
re:	fclean all

.PHONY: all clean fclean re
