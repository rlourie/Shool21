/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 11:58:20 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/19 14:31:46 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*spisok;

	if (*begin_list)
	{
		spisok = ft_create_elem(data);
		spisok->next = *begin_list;
		*begin_list = spisok;
	}
	else
		*begin_list = ft_create_elem(data);
}
