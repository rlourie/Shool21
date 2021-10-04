/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 14:29:58 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/07 14:34:04 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	ans;

	ans = 0;
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
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
