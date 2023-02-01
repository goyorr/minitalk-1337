/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:56:50 by zel-kach          #+#    #+#             */
/*   Updated: 2022/10/12 19:25:08 by zel-kach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*r;
	int		i;
	int		len;

	len = ft_strlen(s);
	r = (char *)s;
	i = 0;
	while (i < len + 1)
	{
		if (r[i] == (char)c)
			return (&r[i]);
		i++;
	}
	return (0);
}
