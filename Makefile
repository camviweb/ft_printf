CFLAGS	=-Wall -Wextra -Werror
CC	=cc $(CFLAGS)
NAME	=libftprintf.a

all: $(NAME)

$(NAME): 
	ar rcs -o $@ $^ 

%.o: %.c
	$(CC) -o $@ -c $<

clean: 
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
