/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudias <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 13:16:32 by gudias            #+#    #+#             */
/*   Updated: 2021/10/15 17:52:23 by gudias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include "libft.h"
//#include<stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	minus;
	int	num;

	minus = 1;
	num = 0;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus = -1;
		i++;
	} 
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + str[i] - '0';
		i++;
	}
	return (num * minus);
}

/*int	main(void)
{
	char s[] = "       2147483647";
	if (ft_atoi(s) != atoi(s))
		printf("%i\n", ft_atoi(s));
	
	return (0);
}*/
