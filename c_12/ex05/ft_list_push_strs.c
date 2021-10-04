/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 18:05:27 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/19 18:28:37 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*buf;
	t_list	*list;
	int		i;

	i = 1;
	list = ft_create_elem(strs[0]);
	buf = list;
	while (i < size)
	{
		list = ft_create_elem(strs[i]);
		list->next = buf;
		buf = list;
		i++;
	}
	return (list);
}
