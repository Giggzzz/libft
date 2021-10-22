/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudias <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:09:59 by gudias            #+#    #+#             */
/*   Updated: 2021/10/22 16:14:13 by gudias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<fcntl.h>

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;
	char			c;

	if (n < 0)
	{
		write(fd, "-", 1);
		nb = -n;
	}
	else
	{
		nb = n;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
	{
		c = nb + '0';
		write(fd, &c, 1);
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
	ft_putnbr_fd(-1345645645, fd);
	write(fd, "\n", 1);
	if (close(fd) == -1)
	{
		write(1, "close error\n", 12);
		return (0);
	}
	write (1, "OK\n", 3);
	return (0);
}*/
