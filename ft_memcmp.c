/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudias <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:48:21 by gudias            #+#    #+#             */
/*   Updated: 2021/10/18 13:03:35 by gudias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t len)
{
	size_t	i;

	if (len == 0)
		return (0);
	i = 0;
	while ((i < len - 1) && (((unsigned char*)s1)[i] == ((unsigned char*)s2)[i]))
		i++;
	return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
}
