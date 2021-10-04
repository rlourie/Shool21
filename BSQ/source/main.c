/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 18:45:09 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/24 19:44:27 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	work(char *a)
{
	char	*simvol;

	simvol = malloc(sizeof(simvol) * 4);
	if ((check_file(a) < 0) || (check_map1(a) < 0)
		|| (check_map0(a) < 0)
		|| (check_soder(a) < 0) || (check_len(a) < 0) || (check_num(a) < 0))
	{
		free(simvol);
		write(1, "map error\n", 10);
	}
	else
	{
		simvol = videlenie(a, simvol);
		algo(zapoln(videlenie1(len_strs(a), q_strs(a)), a),
			videlenie(a, simvol), len_strs(a), q_strs(a));
		free(simvol);
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
	{
		standart_in();
		work(".input_work.txt");
	}
	else
	{
		while (i < argc)
		{
			work(argv[i]);
			i++;
		}
	}
}
