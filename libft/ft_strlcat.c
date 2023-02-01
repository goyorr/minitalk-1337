/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:42:53 by zel-kach          #+#    #+#             */
/*   Updated: 2022/10/28 12:32:03 by zel-kach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s;
	size_t	a;
	size_t	i;

	if (!dst && dstsize == 0)
		return (0);
	i = 0;
	s = ft_strlen(src);
	a = ft_strlen(dst);
	if (dstsize < a + 1)
		return (s + dstsize);
	else
	{
		while (src[i] != '\0' && i < ((dstsize - a) - 1))
		{
			dst[a + i] = src[i];
			i++;
		}
	}
	dst[a + i] = '\0';
	return (a + s);
}
