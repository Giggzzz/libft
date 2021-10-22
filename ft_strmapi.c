/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudias <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 12:23:38 by gudias            #+#    #+#             */
/*   Updated: 2021/10/22 15:26:01 by gudias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	char  *newstring;

	if (!str || !f)
		return (NULL);
	newstring = ft_strdup(str);
	ft_striteri(newstring, (void*)f);
	/*i = 0;
	while (str[i])
	{
		newstring[i] = f(i, str[i]);
		i++;
	}
	str[i] = '\0';*/
	return (newstring);
}
