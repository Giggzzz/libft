# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gudias <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 13:38:20 by gudias            #+#    #+#              #
#    Updated: 2021/10/15 18:46:53 by gudias           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_memset.c \
	ft_bzero.c \
	ft_isspace.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strchr.c \
	ft_strrchr.c
OBJS = ${SRCS:.c=.o}
HEADER = libft.h
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

.c.o:
		${CC} ${CFLAGS} -I . -c $< -o ${<:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
		ar rc ${NAME} ${OBJS}

clean:
		rm -f ${OBJS}

fclean: clean
		rm -f ${NAME}

re: fclean all
