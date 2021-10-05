/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:10:51 by rlourie           #+#    #+#             */
/*   Updated: 2021/10/05 15:51:51 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void	*src, size_t	n)
{
	char		*buf_dst;
	const char	*buf_src;

	if ((dst == src) || (n == 0))
		return (dst);
	buf_dst = (char *)dst;
	buf_src = (const char *)src;
	while (n--)
	{
		buf_dst[n] = buf_src[n];
	}
	return (dst);
}
