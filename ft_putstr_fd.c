
#include<unistd.h>
//#include<fcntl.h>

void	ft_putstr_fd(char *str, int fd)
{	
	if (!str)
		return;
	while (*str != '\0')
	{
		write(fd, str, 1);
		str++;
	}
}

/*int	main()
{
	int	fd;

	fd = open("test.txt", O_CREAT | O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		write (1, "FAIL\n", 5);
		return (0);
	}
	ft_putstr_fd("HELLO WORLD", fd);
	if (close(fd) == -1)
	{
		write(1, "close error\n", 12);
		return (0);
	}
	write (1, "OK\n", 3);
	return (0);
}*/
