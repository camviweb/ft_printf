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
	int	len;

	if (n == -2147483648)
		ft_putstr("-2147483648");
	if (n < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		len = ft_putnbr(-n);
		if (len == -1)
			return (-1);
		return (len + 1);
	}
	len = 0;
	if (n > 9)
	{
		len = ft_putnbr(n / 10);
		if (len == -1)
			return (-1);
	}
	if (ft_putchar(n % 10 + '0') == -1)
		return (-1);
	return (len + 1);
}

/*int	main(void)
{
	int	result1;

	result1 = ft_printf("ft_printf : %d\n", 24);
	printf("The return (value\nft_printf : %d", result1));
}*/