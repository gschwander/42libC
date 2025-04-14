NAME 		= 	libC.a
SRC 		= 	SRC/
OBJS 		= 	$(SRC:.c=.o)
CC 		= 	cc
CFLAGS 		= 	-Wall -Wextra -Werror -Iinclude
includes	= 	include/libC.h

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