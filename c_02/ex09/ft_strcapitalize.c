/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 16:47:31 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/07 19:49:03 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	bukva(char simvol)
{
	if ((simvol >= 'a') && (simvol <= 'z'))
		return (1);
	if ((simvol >= 'A') && (simvol <= 'Z'))
		return (1);
	if ((simvol >= '0') && (simvol <= '9'))
		return (1);
	return (0);
}

int	mal(char simvol)
{
	if ((simvol >= 'a') && (simvol <= 'z'))
		return (1);
	return (0);
}

int	bol(char simvol)
{
	if ((simvol >= 'A') && (simvol <= 'Z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while ((str[i]) && (bukva(str[i]) == 0))
			i++;
		if (mal(str[i]) == 1)
			str[i] = str[i] - 32;
		i++;
		while ((str[i]) && (bukva(str[i]) == 1))
		{
			if (bol(str[i]) == 1)
				str[i] = str[i] + 32;
			i++;
		}
	}
	return (str);
}
