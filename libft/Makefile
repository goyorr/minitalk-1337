# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zel-kach <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 18:07:36 by zel-kach          #+#    #+#              #
#    Updated: 2022/10/19 08:17:02 by zel-kach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =	ft_itoa.c \
		ft_split.c \
		ft_isalpha.c \
   		ft_memcpy.c \
    	ft_strjoin.c \
		ft_strrchr.c \
		ft_isascii.c \
		ft_memmove.c \
		ft_strlcat.c \
		ft_strtrim.c \
		ft_atoi.c \
		ft_isdigit.c \
		ft_memset.c \
		ft_strlcpy.c \
		ft_substr.c \
		ft_bzero.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_tolower.c \
		ft_calloc.c \
		ft_memchr.c \
		ft_strchr.c \
		ft_strncmp.c \
		ft_toupper.c \
		ft_isalnum.c \
		ft_memcmp.c \
		ft_strdup.c \
		ft_strnstr.c \
		ft_strmapi.c \
		ft_putchar_fd.c \
		ft_striteri.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \

BONUS =	ft_lstnew.c \
 		ft_lstadd_front.c \
  		ft_lstsize.c \
   		ft_lstlast.c \
    	ft_lstadd_back.c \
		ft_lstdelone.c \
	  	ft_lstclear.c \
	   	ft_lstiter.c \

OBJS = ${SRCS:.c=.o}

BONUS_OBJS = ${BONUS:.c=.o}

CC = cc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

all : ${NAME}

${NAME}: ${OBJS}
	ar rc $@ ${OBJS}

bonus: all ${BONUS_OBJS}
	ar rc ${NAME} ${BONUS_OBJS}

%.o : %.c libft.h
	${CC} ${CFLAGS} -c $<

clean:	
		${RM} ${OBJS} ${BONUS_OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus
