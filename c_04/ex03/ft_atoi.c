/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 14:52:51 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/10 11:18:39 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	znak;
	int	chislo;

	znak = 1;
	i = 0;
	chislo = 0;
	while ((str[i] == '\f') || (str[i] == '\n') || (str[i] == '\r')
		|| (str[i] == ' ') || (str[i] == '\t') || (str[i] == '\v'))
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			znak = znak * -1;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		chislo = chislo * 10 + (str[i] - '0');
		i++;
	}
	chislo = chislo * znak;
	return (chislo);
}
