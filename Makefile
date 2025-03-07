CFLAGS	= -Wall -Wextra -Werror
CC	= gcc $(CFLAGS)
NAME	= libftprintf.a

all: $(NAME)

$(NAME): ft_printf.o \
	ft_putchar.o \
	ft_putlx.o \
	ft_putnbr.o \
	ft_putptr.o \
	ft_putstr.o \
	ft_putunbr.o \
	ft_putux.o 
	ar rcs $@ $^ 

%.o: %.c
	$(CC) -I. -o $@ -c $<

clean: 
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
