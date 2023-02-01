/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 08:03:36 by zel-kach          #+#    #+#             */
/*   Updated: 2022/11/18 10:00:15 by zel-kach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	arg_type(va_list arg, char format)
{
	if (format == 'c')
		return (ft_putchar(va_arg(arg, int)), 1);
	else if (format == 's')
		return (ft_putstr(va_arg(arg, char *)), 1);
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(arg, int)), 1);
	else if (format == 'u')
		return (ft_unsigned_nbr(va_arg(arg, unsigned int)), 1);
	else if (format == '%')
		return (ft_putchar('%'), 1);
	else if (format == 'x')
		return (ft_print_hex_lower(va_arg(arg, unsigned int)), 1);
	else if (format == 'X')
		return (ft_print_hex_upper(va_arg(arg, unsigned int)), 1);
	else if (format == 'p')
		return (ft_0x(va_arg(arg, unsigned long long)), 1);
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		i;
	int		number;

	i = 0;
	g_count = 0;
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%')
			i += arg_type(arg, format[i + 1]);
		else
			ft_putchar(format[i]);
		i++;
	}
	va_end(arg);
	number = g_count;
	g_count = 0;
	return (number);
}
