/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:05:19 by zel-kach          #+#    #+#             */
/*   Updated: 2022/10/10 05:10:57 by zel-kach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*r;
	size_t				i;

	r = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (r[i] == (unsigned char)c)
			return (&r[i]);
		else
			i++;
	}
	return (0);
}
