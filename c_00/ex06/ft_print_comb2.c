/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 12:10:28 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/05 12:56:19 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	vivod(char q)
{
	write (1, &q, 1);
}

void	second(char w)
{
	int	c;

	c = w;
	w++;
	while (w < 100)
	{
		vivod(c / 10 + '0');
		vivod(c % 10 + '0');
		vivod(' ');
		vivod(w / 10 + '0');
		vivod(w % 10 + '0');
		if (!((c % 10 + '0' == '8') && (c / 10 + '0' == '9')))
		{
			vivod(' ');
			vivod(',');
		}
		w++;
	}
}

void	ft_print_comb2(void)
{
	int	a;

	a = 0;
	while (a < 100)
	{
		second(a);
		a++;
	}
	write(1, "\n", 1);
}
