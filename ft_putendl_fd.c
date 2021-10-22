/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudias <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:09:34 by gudias            #+#    #+#             */
/*   Updated: 2021/10/22 16:09:39 by gudias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include "libft.h"
//#include<fcntl.h>

void	ft_putendl_fd(char *str, int fd)
{	
	ft_putstr_fd(str, fd);
	write(fd, "\n", 1);
}

/*int	main()
{
	int	fd;

	fd = open("test.txt", O_CREAT | O_RDWR | O_APPEND);
	if (fd == -1)
	{
		write (1, "FAIL\n", 5);
		return (0);
	}
	ft_putendl_fd("HELLO WORLD", fd);
	if (close(fd) == -1)
	{
		write(1, "close error\n", 12);
		return (0);
	}
	write (1, "OK\n", 3);
	return (0);
}*/
