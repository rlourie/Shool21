/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheker.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:59:20 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/24 19:24:06 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	check_file(char *name)
{
	int	fd;

	fd = open(name, O_RDONLY);
	if (fd < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (0);
}

int	check_fstr(char *name3)
{
	char	*buf;
	int		i;

	i = 0;
	buf = malloc(sizeof(buf) * 14);
	buf = simvol(name3, buf);
	while (buf[i] != '\n')
		i++;
	if (ft_is_numeric(buf[i - 3]) == 0)
	{
		if (ft_is_numeric(buf[i - 2]) == 0)
		{
			if (ft_is_numeric(buf[i - 1]) == 0)
			{
				return (-3);
			}
			else
				return (-2);
		}
		else
			return (-1);
	}
	return (0);
}

int	check_map0(char *name1)
{
	int		quant;
	int		fquant;
	char	*first;
	int		i;

	i = 0;
	first = malloc(sizeof(first) * 14);
	quant = ft_atoi(simvol(name1, first));
	fquant = q_strs(name1);
	if (len_strs(name1) == 0)
		return (-1);
	if (check_fstr(name1) == -1)
		quant = quant / 10;
	if (check_fstr(name1) == -2)
		quant = quant / 100;
	if (check_fstr(name1) == -3)
		quant = quant / 1000;
	if ((quant != fquant) || (fquant == 0))
		return (-1);
	return (0);
}

int	check_map1(char *name2)
{
	int		quant;
	char	*first;
	int		i;

	i = 0;
	first = malloc(sizeof(first) * 14);
	quant = ft_atoi(simvol(name2, first));
	if ((ft_is_numeric(first[i])) == 0)
	{
		while ((ft_is_numeric(first[i]) == 0) && (first[i + 4] != '\n' ))
			i++;
		if ((first[i + 1] == first[i + 2]) || (first[i + 2] == first [i + 3])
			|| (first[i + 1] == first[i + 3]) || (first[i + 4] != '\n'))
			return (-1);
	}
	else
		return (-1);
	return (0);
}

char	*videlenie(char *name4, char *arr)
{
	char	*buf;
	int		i;

	i = 0;
	buf = malloc(sizeof(buf) * 14);
	buf = simvol(name4, buf);
	while (buf[i] != '\n')
		i++;
	arr[0] = buf[i - 3];
	arr[1] = buf[i - 2];
	arr[2] = buf[i - 1];
	arr[3] = '\n';
	return (arr);
}
