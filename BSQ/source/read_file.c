/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 12:54:07 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/24 19:03:21 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	q_strs(char *p)
{
	char	buf;
	int		flag;
	int		fd;

	flag = -1;
	fd = open(p, O_RDONLY);
	while (read(fd, &buf, 1))
	{
		if (buf == '\n')
			flag++;
	}
	close (fd);
	return (flag);
}

int	len_strs(char *c)
{
	char	buf;
	int		flag;
	int		len;
	int		fd;

	flag = 0;
	len = 0;
	fd = open(c, O_RDONLY);
	while (read(fd, &buf, 1))
	{
		if (flag == 1)
			len++;
		if (buf == '\n')
			flag++;
		if (flag == 2)
		{
			close(fd);
			return (len - 1);
		}
	}
	close(fd);
	return (len);
}

char	*simvol(char *g, char *massiv)
{
	int		fd;

	fd = open(g, O_RDONLY);
	read(fd, massiv, sizeof(char) * 14);
	close(fd);
	return (massiv);
}
