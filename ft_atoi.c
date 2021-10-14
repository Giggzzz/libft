

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
	char s[] = "       -2147483648";
	printf("%i\n", ft_atoi(s));
	
	return (0);
}*/
