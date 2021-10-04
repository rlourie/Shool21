/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 18:21:33 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/14 20:12:34 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	predel(int a)
{
	if (a == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
}

void	ft_putnbr(int nb)
{
	long int	buf;
	long int	buf_1;

	buf_1 = 0;
	buf = 0;
	predel(nb);
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	while (nb > 0)
	{
		buf = buf * 10 + nb % 10;
		nb = nb / 10;
	}
	while (buf > 0)
	{
		buf_1 = buf % 10;
		ft_putchar(buf_1 + '0');
		buf = buf / 10;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
