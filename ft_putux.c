#include "ft_printf.h"

int	ft_putux(unsigned int n)
{
	char *hexa;
	int len;
	int tmp;

	len = 0;
	hexa = "0123456789ABCDEF";
	if (n >= 16)
	{
		tmp = ft_putux(n / 16);
		if (tmp == -1)
			return (-1);
		len += tmp;
	}
	tmp = ft_putchar(hexa[n % 16]);
	if (tmp == -1)
		return (-1);
	return (len + 1);
}