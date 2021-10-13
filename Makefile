# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gudias <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 13:38:20 by gudias            #+#    #+#              #
#    Updated: 2021/10/13 18:00:38 by gudias           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_toupper.c ft_tolower.c ft_memset.c
OBJS = ${SRCS:.c=.o}
HEADER = libft.h
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

.c.o:
		${CC} ${CFLAGS} -I ${HEADER} -c $< -o ${<:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
		ar rc ${NAME} ${OBJS}

clean:
		rm -f ${OBJS}

fclean: clean
		rm -f ${NAME}

re: fclean all
