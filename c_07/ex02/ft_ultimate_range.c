/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 14:45:44 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/13 21:32:41 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*buf;
	int	i;

	i = 0;
	if (min >= max)
	{
		buf = ((void *)0);
		return (-1);
	}
	buf = malloc(sizeof(buf) * (max - min));
	if (buf == ((void *)0))
		return (-1);
	while (min < max)
	{
		buf[i] = min;
		min++;
		i++;
	}
	*range = buf;
	return (i);
}
