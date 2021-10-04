/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:43:21 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/05 14:45:27 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	number(char q, char w, char e)
{
	write(1, &q, 1);
	write(1, &w, 1);
	write(1, &e, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '9')
	{
		b = a + 1;
		while (b <= '9')
		{
			c = b + 1;
			while (c <= '9')
			{
				number(a, b, c);
				if (!(a == '7' && b == '8' && c == '9'))
				{
					write(1, ", ", 2);
				}
				c++;
			}
			b++;
		}
		a++;
	}
	write(1, "\n", 1);
}
