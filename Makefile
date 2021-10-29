# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gudias <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 13:38:20 by gudias            #+#    #+#              #
#    Updated: 2021/10/29 14:59:47 by gudias           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
ft_strlen.c ft_toupper.c ft_tolower.c ft_memset.c ft_bzero.c ft_atoi.c \
ft_calloc.c ft_strdup.c ft_memcpy.c ft_memmove.c ft_strchr.c ft_strrchr.c \
ft_memchr.c ft_strncmp.c ft_memcmp.c ft_strnstr.c ft_strlcpy.c ft_strlcat.c \
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c \
ft_strjoin.c ft_strtrim.c ft_itoa.c ft_split.c ft_strmapi.c ft_striteri.c

B_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c 
 
OBJS = ${SRCS:.c=.o}

B_OBJS = ${B_SRCS:.c=.o}

HEADER = libft.h

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

.c.o:
		${CC} ${CFLAGS} -I . -c $< -o ${<:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
		ar rcs ${NAME} ${OBJS}

bonus: ${OBJS} ${B_OBJS}
		ar rcs ${NAME} ${OBJS} ${B_OBJS}

clean:
		rm -f ${OBJS} ${B_OBJS}

fclean: clean
		rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus
