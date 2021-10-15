/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudias <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:26:31 by gudias            #+#    #+#             */
/*   Updated: 2021/10/15 18:46:44 by gudias           ###   ########.fr       */
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
void*	ft_memcpy(void *dst, const void *src, size_t len); //nt
void*	ft_memmove(void *dst, const void *src, size_t len); //nt
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
int		ft_atoi(const char *str); //nt
void*	ft_calloc(size_t count, size_t size); //nt
char*	ft_strdup(const char *str); //nt
 
// P2
char*	ft_substr(char const *str, unsigned int start, size_t len);
char*	ft_strjoin(char const *s1, char const *s2);
char*	ft_strtrim(char const *str,char const *set);
char**	ft_split(char const *str, char c);
char*	ft_itoa(int n);
char*	ft_strmapi(char const *str, char (*f)(unsigned int, char));
void	ft_striteri(char *str, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putendl_fd(char *str, int fd);
void	ft_putnbr_fd(int n, int fd);
 
#endif

