/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satronac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 13:35:09 by satronac          #+#    #+#             */
/*   Updated: 2021/08/23 18:42:45 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

t_point	put_final(void)
{
	t_point	final1;

	final1.x_b = 0;
	final1.y_b = 0;
	final1.x_e = 0;
	final1.y_e = 0;
	return (final1);
}

void	uslovie(int *x_b, int *y_b, int column)
{
	if (*y_b > column - 1)
	{
		*y_b = 0;
		*x_b = *x_b + 1;
	}
}

void	pechat(char **map2, char put1, t_point final3, char block2)
{
	int	i;
	int	j;

	i = 0;
	while (map2[i])
	{
		j = 0;
		while (map2[i][j])
		{
			if (i >= final3.x_b && i <= final3.x_e
				&& j >= final3.y_b && j <= final3.y_e
				&& map2[final3.x_b][final3.y_b] != block2)
				write(1, &put1, 1);
			else
				write (1, &map2[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	proverka(char **map1, t_point poz1, char block1, t_point final2)
{
	int	i;
	int	j;

	i = poz1.x_b;
	while (i <= poz1.x_e || j <= poz1.y_e)
	{
		j = poz1.y_b;
		while (j <= poz1.y_e)
		{
			if (map1[i][j] == block1)
				return (0);
			j++;
		}
		i++;
	}
	if ((poz1.x_e - poz1.x_b) + (poz1.y_e - poz1.y_b)
		> (final2.x_e - final2.x_b) + (final2.y_e - final2.y_b)
		|| (map1[final2.x_b][final2.y_b] == block1))
		return (1);
	return (0);
}

void	algo(char **map, char *simv, int column, int str)
{
	t_point	poz;
	t_point	final;

	final = put_final();
	poz.x_b = 0;
	poz.y_b = 0;
	while (poz.x_b <= str - 1 && poz.y_b <= column - 1)
	{
		poz.x_e = poz.x_b;
		poz.y_e = poz.y_b;
		while (poz.x_e <= str - 1 && poz.y_e <= column - 1)
		{
			if (proverka(map, poz, simv[1], final) == 1)
				final = poz;
			poz.x_e++;
			poz.y_e++;
		}
		poz.y_b++;
		uslovie(&poz.x_b, &poz.y_b, column);
	}
	pechat(map, simv[2], final, simv[1]);
}
