/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 20:43:50 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/17 20:54:49 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*buf;

	i = 0;
	buf = malloc(sizeof(*buf) * length);
	if ((malloc(sizeof(*buf) * length)) == ((void *)0))
		return ((void *)0);
	while (i < length)
	{
		buf[i] = f(tab[i]);
		i++;
	}
	return (buf);
}
