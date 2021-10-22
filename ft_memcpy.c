/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudias <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:29:11 by gudias            #+#    #+#             */
/*   Updated: 2021/10/22 17:51:15 by gudias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<string.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
/*int	main(void)
{
	char s[] = " ";
	char d[] = "DDD";
	
	printf("%s\n", s);
	printf("%s\n", d);
	void *p;
	p = memcpy(d, s, 1);
	printf("%s\n", d);
	return (0);
}*/
