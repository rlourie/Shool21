/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 19:21:41 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/20 19:47:09 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree	*list;

	list = malloc(sizeof(list));
	if (malloc(sizeof(list)) == ((void *)0))
		return ((void *)0);
	list->left = ((void *)0);
	list->right = ((void *)0);
	list->item = item;
	return (list);
}
