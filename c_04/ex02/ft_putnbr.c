/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 12:07:32 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/09 12:39:34 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
