/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 13:49:29 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/17 13:00:20 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/lib.h" 

void	ft_display_file(int argc, char **argv)
{
	int		fd;
	char	buf;

	if (argc < 2)
		ft_putstr("File name missing.\n");
	if (argc > 2)
		ft_putstr("Too many arguments.\n");
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			ft_putstr("Cannot read file.\n");
		else
		{
			while (read(fd, &buf, 1))
			{
				ft_putchar(buf);
			}
		}
	}
}
