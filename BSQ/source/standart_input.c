/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   standart_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 18:16:09 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/24 19:33:52 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	standart_in(void)
{
	int		fd;
	char	buf;
	int		flag;

	flag = -1;
	fd = open(".input_work.txt", O_WRONLY | O_TRUNC
			| O_CREAT, S_IWRITE | S_IREAD);
	while (read(0, &buf, 1))
	{
		write(fd, &buf, 1);
	}
	close (fd);
}
