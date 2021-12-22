NAME		= get_next_line

HEADER		= get_next_line.h

SRCS		= get_next_line.c get_next_line_utils.c

OBJS		= $(patsubst %.c,%.o,$(SRCS))

FLAGS		= -Wall -Wextra -Werror

BUFF_SIZE 	= -D BUFFER_SIZE=42


.PHONY	: all clean fclean re


all		:	$(NAME)

$(NAME)	:	$(OBJS) $(HEADER)
	cc $(FLAGS) $(BUFF_SIZE) $(OBJS) -o $(NAME)

%.o		:	%.c $(HEADER)
	cc -c $(FLAGS) $(BUFF_SIZE) $< -o $@

clean	:
	rm -f $(OBJS)

fclean	:	clean
	rm -f $(NAME)

re		:	fclean all
