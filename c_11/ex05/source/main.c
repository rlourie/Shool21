/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:07:20 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/18 20:25:27 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	proverka1(int argc)
{
	if (argc != 4)
		return (-1);
	return (0);
}

int	operators(char p)
{
	if (p == '+')
		return (0);
	if (p == '-')
		return (1);
	if (p == '*')
		return (2);
	if (p == '/')
		return (3);
	if (p == '%')
		return (4);
	return (-1);
}

int	proverka(int znak, int second)
{
	if ((znak == 3) && (second == 0))
	{
		write(1, "Stop : division by zero\n", 24);
		return (-1);
	}
	if ((znak == 4) && (second == 0))
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (-2);
	}
	if (znak == -1)
	{	
		write(1, "0", 1);
		return (-3);
	}
	return (0);
}

int	go(int a, int z, int b)
{
	if (z == 0)
		return (a + b);
	if (z == 1)
		return (a - b);
	if (z == 2)
		return (a * b);
	if (z == 3)
		return (a / b);
	if (z == 4)
		return (a % b);
	return (0);
}

int	main(int argc, char **argv)
{
	int	first;
	int	second;
	int	znak;

	first = 0;
	second = 0;
	znak = -1;
	first = ft_atoi(argv[1]);
	second = ft_atoi(argv[3]);
	znak = operators(argv[2][0]);
	if ((proverka1(argc)) == -1)
		return (0);
	if ((proverka(znak, second)) < 0)
		return (0);
	ft_putnbr((go(first, znak, second)));
}
