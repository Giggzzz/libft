/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudias <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 17:32:07 by gudias            #+#    #+#             */
/*   Updated: 2021/10/13 17:58:44 by gudias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<stdio.h>
//#include<string.h>

void	ft_bzero(void *str, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char*)str)[i] = '\0';
		i++;
	}
}

/*int	main(void)
{
	char str[] = "bli bla blu";
	printf("%s\n", str);	
	ft_bzero(str, 3);
	printf("%s\n", str);
	return (0);
}*/
