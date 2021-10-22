/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudias <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:46:31 by gudias            #+#    #+#             */
/*   Updated: 2021/10/22 17:54:23 by gudias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	if (ft_strlen(str) < start)
		return (NULL);
	if (ft_strlen(str) - start < len)
		len = ft_strlen(str) - start;
	res = malloc (sizeof (char) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = str[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*int	main()
{
	char s1[] = "0123456789";
	
	char *s2;
	s2 = ft_substr(s1, 8, 5);
	ft_putstr_fd(s2,1);
		return (0);
}*/
