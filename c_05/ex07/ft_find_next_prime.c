/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:01:08 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/11 12:15:34 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if ((nb == 0) || (nb == 1))
		return (0);
	while (i != nb)
	{
		if (((nb % i) == 0) && (i != 1) && (i != nb))
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (ft_is_prime(nb) != 1)
	{
		nb++;
		if (ft_is_prime(nb) == 1)
			return (nb);
	}
	return (0);
}
