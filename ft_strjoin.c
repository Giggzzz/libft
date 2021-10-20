
#include<stdlib.h>
#include "libft.h"

char*	ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	s1_len;
	size_t	total_len;
//	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1) + 1;
	total_len = s1_len + ft_strlen(s2);
	res = malloc (sizeof(char) * total_len);
	if (!res)
		return (NULL);
//* 
	ft_strlcpy(res, s1, s1_len);
	ft_strlcat(res, s2, total_len);
// */
/* 
	i = 0;
	while (i < (s1_len - 1))
	{
		res[i] = s1[i];
		i++;
	}
	while (i < (total_len - 1))
	{
		res[i] = s2[i - (s1_len - 1)];
		i++;
	}
	res[i] = '\0';
// */
	return (res);
}

/*int	main()
{
	char s[] = "THIS is a 28943hdfb STing ";
	char str[] = "anoteh";
	char *s3;

	ft_putendl_fd(s, 1);
	ft_putendl_fd(str, 1);
	s3 = ft_strjoin(s, str);
	ft_putendl_fd(s3, 1);
	return (0);
}*/
