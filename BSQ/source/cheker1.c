/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheker1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 15:52:08 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/24 19:40:43 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	check_soder(char *name5)
{
	char	*buf1;
	int		i;
	t_check	c;

	i = 0;
	c.flag = 0;
	buf1 = malloc(sizeof(buf1) * 4);
	buf1 = videlenie(name5, buf1);
	c.fd = open(name5, O_RDONLY);
	while (read(c.fd, &c.buf, 1))
	{
		if (c.buf == '\n')
			c.flag++;
		if ((c.buf != buf1[0]) && (c.buf != buf1[1]) && (c.flag > 0))
		{
			if (c.buf != '\n')
			{
				close(c.fd);
				return (-1);
			}
		}
		i++;
	}
	close(c.fd);
	return (0);
}

int	check_len(char *name6)
{
	int		i;
	int		j;
	t_check	c;

	i = -1;
	c.flag = 0;
	c.fd = open(name6, O_RDONLY);
	while (read(c.fd, &c.buf, 1))
	{
		if (c.buf == '\n')
			c.flag++;
		if (c.flag == 1)
			i++;
		j++;
		if (c.flag > 1 && j != i && c.buf == '\n')
		{
			close(c.fd);
			return (-1);
		}
		if (c.buf == '\n')
			j = -1;
	}
	close(c.fd);
	return (0);
}

int	check_num(char *name10)
{
	int		i;
	char	*buf1;
	t_check	c;

	i = 0;
	c.fd = open(name10, O_RDONLY);
	buf1 = malloc(sizeof(buf1) * 15);
	while (read(c.fd, &c.buf, 1))
	{
		buf1[i] = c.buf;
		if (c.buf == '\n')
			break ;
		i++;
	}
	i = 0;
	while (buf1[i + 3] != '\n')
	{
		if (ft_is_numeric(buf1[i]) == -1)
			return (-1);
		i++;
	}
	return (0);
}
