/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudias <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 17:29:32 by gudias            #+#    #+#             */
/*   Updated: 2021/10/21 19:54:19 by gudias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "libft.h"
//#include<stdio.h>

static int	count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if ((str[i] != c) && ((i == 0) || (str[i - 1] == c)))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *str, char c)
{
	char	**res;
	int		i;
	int		j;
	int		start;
	int		w_count;

	if (!str)
		return (NULL);
	w_count = count_words(str, c);
	i = 0;
	res = malloc (sizeof (char *) * (w_count + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	start = 0;
	while (str[i] != '\0')
	{
		if ((str[i] != c) && (i == 0 || (str[i - 1] == c)))
			start = i;
		if ((str[i] != c) && ((str[i + 1] == '\0') || (str[i + 1] == c)))
			res[j++] = ft_substr(str, start, (i - start) + 1);
		i++;
	}
	res[j] = 0;
	return (res);
}
/*int	main(void)
{
	char s1[] = " ++A+AAA+BBBBB  +  +CCCCC+DDD DDD+++  EEE+ ";
	char sep = '+';
	char **res = NULL;

	printf("str: %s\n", s1);
	res = ft_split(s1, sep);
	int i = 0;
	while (res[i])
	{
		printf("%d: %s.\n", i, res[i]);
		i++;
	}
	return (0);
}*/
