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

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		len;
	int		i;

	len = 0;
	i = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i] && s[i] == 'c')
				len += ft_putchar((char)va_arg(args, int));
			else if (s[i] && s[i] == 's')
				len += ft_putstr(va_arg(args, char *));
			else if (s[i] == '\0')
				len += ft_putchar('%'); // pas authorise
			else if (s[i] && s[i] == 'd')
				len += ft_putnbr(va_arg(args, int));
			else if (s[i] && s[i] == '%')
				len += ft_putchar('%');
		}
		else
			len += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (len); // error management with -1
}
