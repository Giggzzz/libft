
#include<stdlib.h>
#include "libft.h"




char** ft_split(char const *str, char c)
{
	char	**res;
	int	i;
	int	w_count;

	i = 0;
	w_count = 0;
	while (str[i] != '\0')
	{
		if ((str[i] != c) && (i = 0 || (str[i - 1] == c)))
			w_count++;
		i++;
	}
	res = malloc (sizeof (char*) * (w_count + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] != c) && (i = 0 || (str[i - 1] == c)))
			start = i;
		if
		i++;
	}
	return (res);
}
