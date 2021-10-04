/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 18:22:29 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/10 21:54:09 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	osnovanie(char *p)
{
	int	j;

	j = 0;
	while (p[j])
		j++;
	return (j);
}

long int	minus(int z)
{
	long int	z1;

	if ((z < 0) && (z != -2147483648))
	{
		write(1, "-", 1);
		return (z * -1);
	}
	if (z == -2147483648)
	{
		z1 = z;
		z1 = -z1;
		write(1, "-", 1);
		return (z1);
	}
	return (z);
}

int	proverka(char *p)
{
	int	a;
	int	q;
	int	flag;

	a = 0;
	q = 0;
	while (p[a])
	{
		if ((p[a] == '+') || (p[a] == '-'))
			return (0);
		while (p[q])
		{
			if (p[a] == p[q + a + 1])
				return (0);
			q++;
		}
		q = 0;
		a++;
	}
	if ((a == 0) || (a == 1))
		return (0);
	return (1);
}

void	vivod(char *p, int q, char *l)
{
	while ((q >= 0) && (proverka(l) == 1))
	{
		write(1, &p[q], 1);
		q--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	char		buf[100];
	int			i;
	int			vr;
	long int	nbr1;

	i = 0;
	vr = 0;
	nbr1 = minus(nbr);
	while ((nbr1 >= osnovanie(base)) && (proverka(base) == 1))
	{
		vr = (nbr1 % osnovanie(base));
		if (vr >= 10)
			buf[i] = vr % 10 + '0' + 17;
		else
			buf[i] = vr + '0';
		nbr1 = nbr1 / osnovanie(base);
		i++;
	}
	if (nbr1 >= 10)
		buf[i] = nbr1 % 10 + '0' + 17;
	else
		buf[i] = nbr1 + '0';
	vivod(buf, i, base);
}
