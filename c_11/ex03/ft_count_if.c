/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 12:39:01 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/18 12:51:15 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			flag++;
		i++;
	}
	return (flag);
}