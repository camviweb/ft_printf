CFLAGS	=-Wall -Wextra -Werror
CC	=cc $(CFLAGS)
NAME	=libftprintf.a

all: $(NAME)

$(NAME): ft_printf.o \
	ft_putchar.o \
	ft_putx.o \
	ft_putnbr.o \
	ft_putptr.o \
	ft_putstr.o \
	ft_putunbr.o
	ar rcs -o $@ $^ 

%.o: %.c
	$(CC) -o $@ -c $<

clean: 
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
