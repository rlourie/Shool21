/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 12:09:49 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/12 15:57:02 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
