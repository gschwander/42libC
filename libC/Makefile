NAME 		= 	libC.a
SRC 		= 	SRC/link_list.c \
			SRC/GNL/get_next_line.c \
			SRC/GNL/get_next_line_utils.c
OBJS 		= 	$(SRC:.c=.o)
CC 		= 	cc
CFLAGS 		= 	-Wall -Wextra -Werror -Iinclude

all:	$(NAME)

%.o: %.c
		$(CC) $(CFLAGS) -c $^ -I. -o $@

$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS)

bonus: $(OBJS)
		ar rc $(NAME) $(OBJS)
	
clean:
		rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean all test fclean re all
