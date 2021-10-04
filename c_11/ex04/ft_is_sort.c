/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 12:51:44 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/18 20:49:59 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	proverka0(int length0, int *tab0, int(*f0)(int, int))
{
	int	i;

	i = 0;
	while (i < (length0 - 1))
	{
		if (f0(tab0[i + 1], tab0[i]) < 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	proverka1(int length1, int *tab1, int(*f1)(int, int))
{
	int	i;

	i = 0;
	while (i < (length1 - 1))
	{
		if (f1(tab1[i + 1], tab1[i]) > 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	if ((proverka0(length, tab, f) == 0) && (proverka1(length, tab, f) == 0))
		return (0);
	return (1);
}
