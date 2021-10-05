/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:52:39 by rlourie           #+#    #+#             */
/*   Updated: 2021/10/05 17:18:52 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dst, const void	*src, size_t	len)
{
	char		*buf_dst;
	const char	*buf_src;
	size_t		i;

	buf_src = (const char *)src;
	buf_dst = (char *)dst;
	i = 0;
	if (buf_dst <= buf_src)
	{
		while (i < len)
		{
			buf_dst[i] = buf_src[i];
			i += 1;
		}
	}
	else
	{
		i = len;
		while (i > 0)
		{
			buf_dst[i - 1] = buf_src[i - 1];
			i -= 1;
		}
	}
	return (dst);
}
