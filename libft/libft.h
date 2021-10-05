/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:26:07 by rlourie           #+#    #+#             */
/*   Updated: 2021/10/05 13:24:59 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <ctype.h>///
# include <stdio.h>///
# include <string.h>///

int		ft_isalpha(int			c);
int		ft_isdigit(int			c);
int		ft_isalnum(int			c);
int		ft_isascii(int			c);
int		ft_isprint(int			c);
size_t	ft_strlen(const char	*s);
void	*ft_memset(void			*b, int				c, size_t		len);
void	ft_bzero(void			*s, size_t			n);
void	*ft_memcpy(void			*dst, const void	*src, size_t	n);
void	*ft_memmove(void		*dst, const void	*src, size_t	len);

#endif
