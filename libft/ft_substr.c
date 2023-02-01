/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 02:26:44 by zel-kach          #+#    #+#             */
/*   Updated: 2022/10/11 02:55:23 by zel-kach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, int start, int len)
{
	char	*ss;
	int		p;

	p = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ss = ft_calloc(1, sizeof(char)));
	else if ((ft_strlen(s) - start) < len)
		ss = (char *)malloc(sizeof(char) * ((ft_strlen(s) - start) + 1));
	else
		ss = (char *)malloc(sizeof(char) * (len + 1));
	if (!ss)
		return (0);
	while (s[start] != 0 && p < len)
	{
			ss[p] = s[start];
			p++;
			start++;
	}
	ss[p] = '\0';
	return (ss);
}
