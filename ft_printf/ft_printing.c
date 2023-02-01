/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 18:21:29 by zel-kach          #+#    #+#             */
/*   Updated: 2022/11/18 13:58:16 by zel-kach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
	g_count++;
}

void	ft_putstr(char *s)
{
	int	i;

	if (!s)
	{
		ft_putstr("(null)");
		return ;
	}
	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}

void	ft_address(unsigned long long nb)
{
	if (nb > 15)
	{
		ft_address(nb / 16);
		ft_address(nb % 16);
	}
	else
		ft_putchar(LOWER[nb]);
}

void	ft_0x(unsigned long long nb)
{
	ft_putstr("0x");
	ft_address(nb);
}
