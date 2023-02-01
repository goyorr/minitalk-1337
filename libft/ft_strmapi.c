/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 05:51:55 by zel-kach          #+#    #+#             */
/*   Updated: 2022/10/22 05:51:58 by zel-kach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	int		i;
	int		a;
	char	*str;

	i = 0;
	if (!s || !f)
		return (0);
	a = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (a + 1));
	if (!str)
		return (0);
	while (i < a)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
