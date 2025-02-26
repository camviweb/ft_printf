/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canguyen <canguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 15:34:18 by canguyen          #+#    #+#             */
/*   Updated: 2024/12/07 13:04:48 by canguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	char	c;
	char	sign;
	static int		len = 0; // allowed ?

	sign = '-';
	if (n == -2147483648)
	{
		write(0, "-2147483648", 11);
		return (11);
	}
	else if (n < 0)
	{
		write(0, &sign, 1);
		len++;
		n = -n;
		ft_putnbr(n);
	}
	else if (n < 10)
	{	
		c = n + '0';
		write(0, &c, 1);
		len++;
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	return (len);
}
