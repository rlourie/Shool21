/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:13:05 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/17 20:23:04 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>

void	ft_putchar(char c);
void	ft_cat(int argc, char **argv);
void	eror(char *p);
void	print(char *p);
void	print1(char *p);
void	print2(char *p);

#endif
