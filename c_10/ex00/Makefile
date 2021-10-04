NAME		= ft_display_file
SRCS		= main.c ft_display_file.c ft_putstr.c ft_putchar.c
PREFIX		= ft/
SRCSPREF	= $(addprefix $(PREFIX),$(SRCS))
OBJS		= $(patsubst %.c,%.o,$(SRCSPREF))
CC			= gcc
CFLAGC		= -Wall -Wextra -Werror
RM			= rm -f
%.o:		%.c
			$(CC) $(CFLAGC) -c $< -o $@
$(NAME):	$(OBJS)
			$(CC) -o $(NAME) $(OBJS)
			
all:		$(NAME)
clean:
			$(RM) $(OBJS)
fclean:		clean
			$(RM) $(NAME)
re:			fclean all
.PHONY:		all clean fclean re
