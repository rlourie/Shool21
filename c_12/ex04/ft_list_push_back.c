/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:38:03 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/19 18:02:18 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*last;

	if (*begin_list)
	{
		last = *begin_list;
		while (last->next)
			last = last->next;
		last->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
