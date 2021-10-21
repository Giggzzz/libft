/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudias <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:26:31 by gudias            #+#    #+#             */
/*   Updated: 2021/10/21 19:57:42 by gudias           ###   ########.fr       */
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
size_t	ft_strlcpy(char *dst, const char *src, size_t size); //nt
size_t	ft_strlcat(char *dst, const char *src, size_t size); //nt
int		ft_toupper(int c);
int		ft_tolower(int c);
char*   ft_strchr(const char *str, int c); //nt
char*   ft_strrchr(const char *str, int c); //nt
int		ft_strncmp(const char *s1, const char *s2, size_t len); //nt
void*	ft_memchr(const void *str, int c, size_t len); //nt
int		ft_memcmp(const void *s1, const void *s2, size_t len); //nt
char*	ft_strnstr(const char *str, const char *tofind, size_t len); //nt
int		ft_atoi(const char *str); //nt
void*	ft_calloc(size_t count, size_t size); //nt
char*	ft_strdup(const char *str); //nt
 
// P2
char*	ft_substr(char const *str, unsigned int start, size_t len); //nt
char*	ft_strjoin(char const *s1, char const *s2); //nt
char*	ft_strtrim(char const *str,char const *set); //nt
char**	ft_split(char const *str, char c); //nt
char*	ft_itoa(int n); //nt
char*	ft_strmapi(char const *str, char (*f)(unsigned int, char));
void	ft_striteri(char *str, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd); //nt
void	ft_putstr_fd(char *str, int fd); //nt
void	ft_putendl_fd(char *str, int fd); //nt
void	ft_putnbr_fd(int n, int fd); //nt
 
#endif

