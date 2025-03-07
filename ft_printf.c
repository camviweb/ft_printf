/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canguyen <canguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:23:13 by canguyen          #+#    #+#             */
/*   Updated: 2024/12/14 11:43:56 by canguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	do_format(const char *s, va_list args, int i);

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		len;
	int		i;
	int		tmp;

	if(!s)
		return (0);
	len = 0;
	i = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
			tmp = do_format(s, args, ++i);
		else
			tmp = ft_putchar(s[i]);
		if (tmp == -1){
			va_end(args);
			return (-1);
		}
		len += tmp;
		i++;
	}
	va_end(args);
	return (len);
}

static int	do_format(const char *s, va_list args, int i)
{
	int	tmp;
	int	tmp2;

	tmp = 0;
	tmp2 = 0;
	if (s[i] && s[i] == 'c')
		tmp = ft_putchar(va_arg(args, int));
	else if (s[i] && s[i] == 's')
		tmp = ft_putstr(va_arg(args, char *));
	else if (s[i] && s[i] == 'p')
	{
		tmp2 = ft_putstr("0x");
		if (tmp2 == -1)
    			return (-1);
		tmp = tmp2 + ft_putptr(va_arg(args, unsigned long long));
	}
	else if (s[i] && s[i] == 'd')
		tmp = ft_putnbr(va_arg(args, int));
	else if (s[i] && s[i] == 'u')
		tmp = ft_putunbr(va_arg(args, unsigned int));
	else if (s[i] && s[i] == 'x')
		tmp = ft_putlx(va_arg(args, unsigned int));
	else if (s[i] && s[i] == 'X')
		tmp = ft_putux(va_arg(args, unsigned int));
	else if (s[i] && s[i] == '%')
		tmp = ft_putchar('%');
	if (tmp == -1 || tmp2 == -1)
		return (-1);
	return (tmp);
}
