NAME		= libftprintf.a

HEADER		= ft_printf.h

SRCS		= ft_binary.c ft_printf.c ft_putchar_fd.c ft_putnbr_fd.c \
			  ft_putnbr_u_fd.c ft_putstr_fd.c

OBJS		= $(patsubst %.c,%.o,$(SRCS))

FLAGS		= -Wall -Wextra -Werror


.PHONY	: all clean fclean re


all		:	$(NAME)

$(NAME)	:	$(OBJS) $(HEADER)
	ar rcs $(NAME) $?

%.o		:	%.c $(HEADER)
	cc -c $(FLAGS) $(BUFF_SIZE) $< -o $@

clean	:
	rm -f $(OBJS)

fclean	:	clean
	rm -f $(NAME)

re		:	fclean all
