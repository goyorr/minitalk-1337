/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:52:41 by zel-kach          #+#    #+#             */
/*   Updated: 2022/11/18 13:52:50 by zel-kach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

void	ft_unsigned_nbr(unsigned int nb)
{
	if (nb > 9)
	{
		ft_unsigned_nbr(nb / 10);
		ft_unsigned_nbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

void	ft_print_hex_lower(unsigned int nb)
{
	if (nb > 15)
	{
		ft_print_hex_lower(nb / 16);
		ft_print_hex_lower(nb % 16);
	}
	else
		ft_putchar(LOWER[nb]);
}

void	ft_print_hex_upper(unsigned int nb)
{
	if (nb > 15)
	{
		ft_print_hex_upper(nb / 16);
		ft_print_hex_upper(nb % 16);
	}
	else
		ft_putchar(UPPER[nb]);
}
