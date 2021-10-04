# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: satronac <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/22 18:21:36 by satronac          #+#    #+#              #
#    Updated: 2021/08/24 16:30:43 by rlourie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
CC = gcc
CFLAGS = -Wall -Werror -Wextra -c
LFLAGS = -Wall -Werror -Wextra -o
FUNC_DIR = source/
FUNC = cheker.c zapolnenie.c cheker1.c main.c algo.c ft_atoi.c ft_str_is_numeric.c read_file.c videlenie.c standart_input.c
SRCFUNC = $(addprefix $(FUNC_DIR), $(FUNC))
OBJS = $(patsubst %.c, %.o, $(SRCFUNC))
RM = rm -f
%.o: %.c
	@$(CC) $(CFLAGS) $< -o $@

$(NAME): $(OBJS)
	@$(CC) -o $(NAME) $(OBJS)
all: $(NAME)
	@$(RM) .input_work.txt

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

