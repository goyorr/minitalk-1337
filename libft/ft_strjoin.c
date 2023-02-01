/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 03:30:13 by zel-kach          #+#    #+#             */
/*   Updated: 2022/10/11 05:20:00 by zel-kach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	char	*s;
	size_t	i;
	size_t	o;
	size_t	s1l;
	size_t	s2l;

	if (!s1 || !s2)
		return (0);
	s1l = ft_strlen(s1);
	s2l = ft_strlen(s2);
	i = 0;
	o = 0;
	s = (char *)malloc(((s1l + s2l) * sizeof(char)) + 1);
	if (!s)
		return (0);
	while (s1l > i)
		s[o++] = s1[i++];
	i = 0;
	while (s2l > i)
		s[o++] = s2[i++];
	s[o] = '\0';
	return (s);
}
