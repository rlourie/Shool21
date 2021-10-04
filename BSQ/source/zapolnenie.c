/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zapolnenie.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 18:43:34 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/23 21:10:10 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char	**zapoln(char **empty_map, char *name7)
{
	int		i;
	t_check	c;
	int		j;

	i = -1;
	c.flag = 0;
	c.fd = open(name7, O_RDONLY);
	while (read(c.fd, &c.buf, 1))
	{
		if (c.buf == '\n')
		{
			c.flag++;
			i++;
			j = 0;
		}
		else
		{
			if (c.flag > 0)
			{
				empty_map[i][j] = c.buf;
				j++;
			}
		}
	}
	return (empty_map);
}
