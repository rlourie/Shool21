/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 21:17:24 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/08 13:28:08 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (i < n))
	{
		if ((s1[i] == '\0') && (s2[i] == '\0'))
		{
			return (0);
		}
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	if (s1[i] > s2[i])
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
