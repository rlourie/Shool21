/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vidilenie.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satronac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 13:07:26 by satronac          #+#    #+#             */
/*   Updated: 2021/08/23 19:03:25 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char	**videlenie1(int column, int str)
{
	char	**empty_map;
	int		i;

	i = 0;
	empty_map = (char **)malloc(sizeof(char *) * (str + 1));
	if (empty_map == ((void *)0))
		return ((void *)0);
	while (i < str)
	{
		empty_map[i] = malloc(sizeof(char) * (column + 1));
		if (empty_map[i] == ((void *)0))
			return ((void *)0);
		i++;
	}
	empty_map[i] = ((void *)0);
	return (empty_map);
}
