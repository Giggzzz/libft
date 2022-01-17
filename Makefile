# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gudias <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 13:38:20 by gudias            #+#    #+#              #
#    Updated: 2022/01/17 19:47:11 by gudias           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
ft_strlen.c ft_toupper.c ft_tolower.c ft_memset.c ft_bzero.c ft_atoi.c \
ft_calloc.c ft_strdup.c ft_memcpy.c ft_memmove.c ft_strchr.c ft_strchr_nl.c ft_strrchr.c get_next_line.c \
ft_memchr.c ft_strncmp.c ft_memcmp.c ft_strnstr.c ft_strlcpy.c ft_strlcat.c \
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c \
ft_strjoin.c ft_strtrim.c ft_itoa.c ft_split.c ft_strmapi.c ft_striteri.c \
\
ft_printf/ft_printf.c ft_printf/get_flags.c ft_printf/print.c \
ft_printf/print_format.c ft_printf/putters_count.c \
\
lst/ft_lstnew.c lst/ft_lstadd_front.c lst/ft_lstsize.c lst/ft_lstlast.c \
lst/ft_lstadd_back.c lst/ft_lstdelone.c lst/ft_lstclear.c lst/ft_lstiter.c lst/ft_lstmap.c \
ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c
 
OBJS = ${SRCS:.c=.o}

INCS = includes

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

.c.o:
		${CC} ${CFLAGS} -I $(INCS) -c $< -o ${<:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
		ar rcs ${NAME} ${OBJS}

clean:
		rm -f ${OBJS}

fclean: clean
		rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
