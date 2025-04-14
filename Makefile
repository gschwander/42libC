.PHONY: all clean libft

all: libft 

libft:
	$(MAKE) -C libft

# libC:
# 	$(MAKE) -C libC

clean:
	$(MAKE) -C libft clean
	# $(MAKE) -C libC clean

fclean:
	$(MAKE) -C libft fclean
	# $(MAKE) -C libC fclean

re: fclean all