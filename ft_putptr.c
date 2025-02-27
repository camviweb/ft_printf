#include "ft_printf.h"

int	ft_putptr(unsigned long long adr)
{
	char *hexa;
	int len;
	int tmp;

	len = 0;
	hexa = "0123456789abcdef";
	if (adr >= 16)
	{
		tmp = ft_putptr(adr / 16);
		if (tmp == -1)
			return (-1);
		len += tmp;
	}
	tmp = ft_putchar(hexa[adr % 16]);
	if (tmp == -1)
		return (-1);
	return (len + 1);
}