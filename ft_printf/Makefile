# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zel-kach <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 07:45:49 by zel-kach          #+#    #+#              #
#    Updated: 2022/11/16 07:45:51 by zel-kach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c \
	  ft_print_nbr.c\
	  ft_printing.c

OBJ = ${SRC:.c=.o}

CC = cc

RM = rm -rf

CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJ}
		 ar rc $@ ${OBJ}

%.o: %.c ft_printf.h
	 	 ${CC} ${CFLAGS} -c $<

clean:
	    ${RM} ${OBJ}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
