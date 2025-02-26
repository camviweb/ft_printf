/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canguyen <canguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 11:07:18 by canguyen          #+#    #+#             */
/*   Updated: 2024/12/14 11:49:58 by canguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h> // va_start, va_arg, va_copy, va_end
# include <stdlib.h> // malloc et free
# include <unistd.h> // write

int	ft_printf(const char *, ...);
int	ft_strlen(char *str);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);

#endif
