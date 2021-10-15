/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudias <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 17:29:11 by gudias            #+#    #+#             */
/*   Updated: 2021/10/15 18:46:26 by gudias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<string.h>
#include "libft.h"

void*	ft_memmove(void *dst, const void *src, size_t len)
{
	if (src < dst)
	{
		while (len--)
			((unsigned char*)dst)[len] = ((unsigned char*)src)[len];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

/*int	main(void)
{
	char s[] = "AAAAAAAA";
	char d[] = "DDD";
	
	printf("%s\n", s);
	printf("%s\n", d);
	void *p;
	p = ft_memmove(d, s, 1);
	printf("%s\n", d);
	return (0);
}*/
