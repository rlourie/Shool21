/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 16:29:51 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/14 20:13:54 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*buf;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	buf = malloc(sizeof(src) * (i + 1));
	if (buf == ((void *)0))
		return (((void *)0));
	while (j < i)
	{
		buf[j] = src[j];
		j++;
	}
	buf[j] = '\0';
	return (buf);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			j;
	t_stock_str	*pol;

	i = 0;
	j = 0;
	pol = malloc(sizeof(pol) * (ac + 1));
	if (pol == (void *)0)
		return ((void *)0);
	while (i < ac)
	{
		pol[i].size = ft_strlen(av[i]);
		pol[i].str = av[i];
		pol[i].copy = malloc(sizeof(pol[i].copy) * (ft_strlen(av[i]) + 1));
		if (pol[i].copy == (void *)0)
			return ((void *)0);
		pol[i].copy = ft_strdup(av[i]);
		i++;
	}
	pol[i].str = 0;
	return (pol);
}
