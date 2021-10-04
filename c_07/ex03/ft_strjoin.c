/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 16:54:59 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/13 21:00:07 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	fstrlen(char *p)
{
	int	i;

	i = 0;
	while (p[i])
		i++;
	return (i);
}

int	leng(int siz, char **str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < siz)
	{
		while (str[i][j])
		{
			j++;
		}
		i++;
	}
	return (j);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*buf;

	i = 0;
	buf = malloc(sizeof(buf) * (leng(size, strs) + size * fstrlen(sep)));
	if (buf == (void *)0)
		return ((void *)0);
	while (i < size)
	{
		ft_strcat(buf, strs[i]);
		if (i != size - 1)
			ft_strcat(buf, sep);
		i++;
	}
	return (buf);
}
