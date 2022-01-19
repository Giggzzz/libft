# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gudias <marvin@42lausanne.ch>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 13:38:20 by gudias            #+#    #+#              #
#    Updated: 2022/01/19 06:07:34 by gudias           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCSDIR = srcs

SUBDIRS	= objs/checks objs/convert objs/files objs/lists \
objs/maths objs/memory objs/print objs/print/ft_printf objs/strings

SRCS = \
\
checks/ft_isalpha.c \
checks/ft_isdigit.c \
checks/ft_isalnum.c \
checks/ft_isascii.c \
checks/ft_isprint.c \
\
strings/ft_strlen.c \
strings/ft_strdup.c \
strings/ft_strchr.c \
strings/ft_strchr_nl.c \
strings/ft_strrchr.c \
strings/ft_strnstr.c \
strings/ft_strlcpy.c \
strings/ft_strncmp.c \
strings/ft_strlcat.c \
strings/ft_strjoin.c \
strings/ft_strtrim.c \
strings/ft_substr.c \
strings/ft_split.c \
strings/ft_strmapi.c \
strings/ft_striteri.c \
\
convert/ft_toupper.c \
convert/ft_tolower.c \
convert/ft_atoi.c \
convert/ft_itoa.c \
\
memory/ft_bzero.c \
memory/ft_memchr.c \
memory/ft_memcmp.c \
memory/ft_memset.c \
memory/ft_memcpy.c \
memory/ft_memmove.c \
memory/ft_calloc.c \
\
files/get_next_line.c \
\
print/ft_putchar.c \
print/ft_putstr.c \
print/ft_putendl.c \
print/ft_putnbr.c \
print/ft_putchar_fd.c \
print/ft_putstr_fd.c \
print/ft_putendl_fd.c \
print/ft_putnbr_fd.c \
print/ft_printf/ft_printf.c \
print/ft_printf/get_flags.c \
print/ft_printf/print.c \
print/ft_printf/print_format.c \
print/ft_printf/putters_count.c \
\
lists/ft_lstnew.c \
lists/ft_lstadd_front.c \
lists/ft_lstsize.c \
lists/ft_lstlast.c \
lists/ft_lstadd_back.c \
lists/ft_lstdelone.c \
lists/ft_lstclear.c \
lists/ft_lstiter.c \
lists/ft_lstmap.c 

OBJSDIR = objs

OBJS = ${SRCS:%.c=$(OBJSDIR)/%.o}

INCS = includes

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

$(OBJSDIR)/%.o: srcs/%.c 
		mkdir -p $(OBJSDIR) $(SUBDIRS)
		${CC} ${CFLAGS} -I $(INCS) -c $< -o $@

all: ${NAME}

${NAME}: ${OBJS}
		ar rcs ${NAME} $^

clean:
		rm -rf ${OBJSDIR}

fclean: clean
		rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
