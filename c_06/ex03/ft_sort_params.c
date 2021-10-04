/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 17:04:10 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/12 21:21:45 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	swap(char **a, char **b)
{
	char	*sw;

	sw = *a;
	*a = *b;
	*b = *a;
}

void	sort(char **p, int size)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(p[i], p[j]) > 0)
			{
				tmp = p[j];
				p[j] = p[i];
				p[i] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	sort(argv, argc);
	while (i < argc)
	{
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
}
