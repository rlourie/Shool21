/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 20:28:31 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/19 12:58:15 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*buf;

	buf = malloc(sizeof(buf));
	if ((malloc(sizeof(buf))) == ((void *)0))
		return ((void *)0);
	buf->data = data;
	buf->next = NULL;
	return (buf);
}
