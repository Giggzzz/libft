# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gudias <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 13:38:20 by gudias            #+#    #+#              #
#    Updated: 2022/01/18 02:54:45 by gudias           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_PATH = srcs

SUBDIRS	= checks convert files lists maths memory print strings

SRCS = \
\
srcs/checks/ft_isalpha.c srcs/checks/ft_isdigit.c srcs/checks/ft_isalnum.c \
srcs/checks/ft_isascii.c srcs/checks/ft_isprint.c \
\
srcs/strings/ft_strlen.c srcs/strings/ft_strdup.c srcs/strings/ft_strchr.c \
srcs/strings/ft_strchr_nl.c srcs/strings/ft_strrchr.c srcs/strings/ft_strnstr.c \
srcs/strings/ft_strlcpy.c srcs/strings/ft_strncmp.c srcs/strings/ft_strlcat.c \
srcs/strings/ft_strjoin.c srcs/strings/ft_strtrim.c srcs/strings/ft_substr.c \
srcs/strings/ft_split.c srcs/strings/ft_strmapi.c srcs/strings/ft_striteri.c \
\
srcs/convert/ft_toupper.c srcs/convert/ft_tolower.c srcs/convert/ft_atoi.c \
srcs/convert/ft_itoa.c \
\
srcs/memory/ft_bzero.c srcs/memory/ft_memchr.c srcs/memory/ft_memcmp.c \
srcs/memory/ft_memset.c srcs/memory/ft_memcpy.c srcs/memory/ft_memmove.c \
srcs/memory/ft_calloc.c \
\
srcs/files/get_next_line.c \
\
srcs/print/ft_putchar.c srcs/print/ft_putstr.c srcs/print/ft_putendl.c \
srcs/print/ft_putnbr.c srcs/print/ft_putchar_fd.c srcs/print/ft_putstr_fd.c \
srcs/print/ft_putendl_fd.c srcs/print/ft_putnbr_fd.c srcs/print/ft_printf/ft_printf.c \
srcs/print/ft_printf/get_flags.c srcs/print/ft_printf/print.c \
srcs/print/ft_printf/print_format.c srcs/print/ft_printf/putters_count.c \
\
srcs/lists/ft_lstnew.c srcs/lists/ft_lstadd_front.c srcs/lists/ft_lstsize.c srcs/lists/ft_lstlast.c \
srcs/lists/ft_lstadd_back.c srcs/lists/ft_lstdelone.c srcs/lists/ft_lstclear.c srcs/lists/ft_lstiter.c srcs/lists/ft_lstmap.c 

OBJS_DIR = objs

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
