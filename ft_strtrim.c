
#include<stdlib.h>
#include "libft.h"

static int	is_totrim(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char*	ft_strtrim(char const *str, char const *set)
{
	char	*res;
	int	len;

	if (!str || !set)
		return (NULL);	
	while (is_totrim(*str, set))
		str++; 
	len = ft_strlen(str);
	while (is_totrim(str[len - 1], set))
		len--;
	res = malloc(sizeof (char) * (len + 1));
	if (!res)
		return (NULL);
	ft_strlcpy(res, str, len + 1);
	return (res);
}

/*int	main(void)
{
	char s[] = "     *    HELL*O     #";
	char set[] = " *#";

	char *new;
	new = ft_strtrim(s, set);
	ft_putstr_fd(new, 1);
	return (0);
}*/