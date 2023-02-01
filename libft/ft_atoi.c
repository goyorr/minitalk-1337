/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 23:53:41 by zel-kach          #+#    #+#             */
/*   Updated: 2022/11/09 08:19:53 by zel-kach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int					sign;
	unsigned long long	r;

	sign = 1;
	r = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		if (r > 9223372036854775807ull && sign == -1)
			return (0);
		if (r >= 9223372036854775807ull && sign == 1)
			return (-1);
		r = r * 10 + (*str - '0');
		str++;
	}
	return ((int)r * sign);
}
