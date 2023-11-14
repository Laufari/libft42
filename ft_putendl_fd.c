/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufarin <laufarin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:37:12 by laufarin          #+#    #+#             */
/*   Updated: 2023/09/18 12:24:45 by laufarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
	{
		write (fd, &*s, 1);
		s++;
	}
	write(fd, "\n", 1);
}
/*
 otra manera de hacerlo llamando a las funciiones que ya tengo
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putstr_fd("\n", fd);
}

#include "fcntl.h"

int	main(void)
{
	char	str[] = "Hi Laura";
	int		fd;
	int		loop;

	loop = 10;
	fd = open("test", O_WRONLY);
	while (loop > 0 )
	{
		ft_putendl_fd(str, fd);
		loop--;
	}
	close(fd);
	return (0);
}*/
