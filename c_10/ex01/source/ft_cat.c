/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 13:49:29 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/17 20:21:06 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	check(int errno1, char *p)
{
	int	flag;

	flag = 0;
	if (errno1 == 21)
	{
		print(p);
		flag++;
		return (flag);
	}
	if (errno == 13)
	{
		print1(p);
		flag++;
		return (flag);
	}
	return (flag);
}

void	vivod(int fd, char *p)
{
	char	buf1;

	while (read(fd, &buf1, 1))
	{
		if (check(errno, p) == 1)
			break ;
		ft_putchar(buf1);
	}
}

void	ft_cat(int argc, char **argv)
{
	int		i;
	int		fd;
	int		errno;

	i = 1;
	errno = 0;
	while (i < argc)
	{	
		fd = open(argv[i], O_RDONLY);
		if (check(errno, argv[i]) == 1)
			break ;
		if (fd != -1)
		{
			vivod(fd, argv[i]);
		}
		else
			print2(argv[i]);
		i++;
		close(fd);
	}
}
