/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 13:57:07 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/12 15:48:27 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*buf;
	int	i;

	i = 0;
	if (min >= max)
		return ((void *)0);
	buf = malloc(sizeof(buf) * (max - min));
	if (buf == ((void *)0))
		return ((void *)0);
	while (min < max)
	{
		buf[i] = min;
		min++;
		i++;
	}
	return (buf);
}
