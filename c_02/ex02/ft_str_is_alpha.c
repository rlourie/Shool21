/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 12:57:12 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/07 20:07:48 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	ans;

	ans = 0;
	i = 0;
	while (str[i])
	{
		if (((str[i] >= 'a') && (str[i] <= 'z'))
			   	 || ((str[i] >= 'A') && (str[i] <= 'Z')))
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
