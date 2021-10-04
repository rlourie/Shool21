/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:13:05 by rlourie           #+#    #+#             */
/*   Updated: 2021/08/24 19:38:15 by rlourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct s_point
{
	int	x_b;
	int	y_b;
	int	x_e;
	int	y_e;
}t_point;

typedef struct s_check
{
	int		flag;
	char	buf;
	int		fd;
}t_check;

int		ft_atoi(char *str);
void	ft_putstr(char *str);
int		q_strs(char *p);
int		len_strs(char *c);
char	*simvol(char *g, char *massiv);
int		ft_is_numeric(char str);
int		check_soder(char *name5);
int		check_file(char *name);
int		check_fstr(char *name3);
int		check_map0(char *name1);
int		check_map1(char *name2);
char	*videlenie(char *name4, char *arr);
int		check_len(char *name6);
char	**videlenie1(int column, int str);
void	algo(char **map, char *simv, int column, int str);
char	**zapoln(char **empty_map, char *name7);
void	standart_in(void);
int		check_num(char *name10);

#endif
