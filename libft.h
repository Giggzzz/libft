/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudias <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:26:31 by gudias            #+#    #+#             */
/*   Updated: 2021/10/13 18:00:22 by gudias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include<stddef.h>

//FONCTIONS SUPPL.

// P1
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void*	memset(void *str, int c, size_t len);
 /* bzero
 * memcpy
 * memmove
 * strlcpy
 * strlcat
 */
int		ft_toupper(int c);
int		ft_tolower(int c);
/* strchr
 * strrchr
 * strncmp
 * memchr
 * memcmp
 * strnstr
 * atoi
 * calloc
 * strdup
 */
 
// P2
 /* ft_substr
 * ft_strjoin
 * ft_strtrim
 * ft_split
 * ft_itoa
 * ft_strmapi
 * ft_striteri
 * ft_putchar_fd
 * ft_putstr_fd
 * ft_putendl_fd
 * ft_putnbr_fd
 */
#endif

