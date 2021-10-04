/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_help.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:56:05 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/17 15:12:37 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	eror(char *p)
{
	int	i;

	i = 0;
	while (p[i])
	{
		write(2, &p[i], 1);
		i++;
	}
}

void	print(char *p)
{
	eror("ft_cat: ");
	eror(p);
	eror(": Is a directory\n");
}

void	print1(char *p)
{
	eror("ft_cat: ");
	eror(p);
	eror(": Permission denied\n");
}

void	print2(char *p)
{
	eror("ft_cat: ");
	eror(p);
	eror(": No such file or directory\n");
}
