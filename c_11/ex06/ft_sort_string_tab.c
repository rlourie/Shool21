/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:34:13 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/18 18:18:53 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if ((s1[i] == '\0') && (s2[i] == '\0'))
		{
			return (0);
		}
		i++;
	}
	if (s1[i] > s2[i])
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}

void	ft_sort_string_tab(char **tab)
{
	int		size;
	int		i;
	int		j;
	char	*tmp;

	size = 0;
	while (tab[size])
		size++;
	i = 0;
	while (i < (size - 1))
	{
		j = 0;
		while (j < (size - i - 1))
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}
