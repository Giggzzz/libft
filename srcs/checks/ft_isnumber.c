/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudias <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:23:51 by gudias            #+#    #+#             */
/*   Updated: 2022/01/20 01:59:01 by gudias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isnumber(char *str)
{
	if (!str)
		return (0);
	if ((*str == '+' || *str == '-') && *(str + 1))
		str++;
	
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		str++;	
	}
	return (1);
}