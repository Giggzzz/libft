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

//FONCTIONS SUPPL
int	ft_isspace(int c); //nt

// P1
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void*	ft_memset(void *str, int c, size_t len); //no tests
void	ft_bzero(void *str, size_t len); //no tests
//void*	ft_memcpy(void *dst, const void *src, size_t len); //nt
//void*	ft_memmove(void *dst, const void *src, size_t len); //nt
/* strlcpy
 * strlcat
 */
int		ft_toupper(int c);
int		ft_tolower(int c);
/* strchr
 * strrchr
 * strncmp
 * memchr
 * memcmp
 * strnstr*/
int	ft_atoi(const char *str); //nt
/* calloc
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

