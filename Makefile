# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zel-kach <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/24 22:17:23 by zel-kach          #+#    #+#              #
#    Updated: 2023/01/24 22:17:25 by zel-kach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

libfta = ./libft/libft.a
printfa = ./ft_printf/libftprintf.a

all: libftt printff ${NAME}

${NAME}: client server

libftt:
		make -C libft
printff:
		make -C ft_printf

client: client.c
		${CC} ${CFLAGS} $< ${libfta} ${printfa} -o client

server: server.c
		${CC} ${CFLAGS} $< ${libfta} ${printfa} -o server

libftclean:
			make clean -C libft
printfclean:
			make clean -C ft_printf

libftfclean:
			make fclean -C libft
printffclean:
			make fclean -C ft_printf

clean: libftclean printfclean

fclean: libftfclean printffclean
		${RM} server client

re: fclean all

.PHONY: all clinet libftt printff clean fclean libftclean libftfclean printfclean printffclean re