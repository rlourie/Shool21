/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 20:31:18 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/17 20:23:38 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	idiot(void)
{
	char	buf;

	while (read(0, &buf, 1))
		ft_putchar(buf);
}

int	main(int argc, char **argv)
{	
	int	i;

	i = 1;
	if ((argc == 1) || (argv[i][0] == '-'))
	{
		idiot();
	}
	ft_cat(argc, argv);
	return (0);
}
