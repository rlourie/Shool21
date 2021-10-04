/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 14:39:01 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/07 15:13:23 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	ans;

	ans = 0;
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 32) && (str[i] <= 126))
		{
			ans = 1;
		}
		else
		{
			ans = 0;
		}
		if (ans == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
