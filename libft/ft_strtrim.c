/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 00:25:56 by zel-kach          #+#    #+#             */
/*   Updated: 2022/10/14 05:08:28 by zel-kach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 

static size_t	ft_start(const char *s1, const char *set)
{
	size_t	p;
	size_t	i;
	size_t	setl;

	setl = ft_strlen(set);
	p = 0;
	i = 0;
	while (p < setl && s1[i] != '\0')
	{
		if (s1[i] == set[p])
		{
			i++;
			p = 0;
		}
		else
			p++;
	}
	return (i);
}

static size_t	ft_end(char const *s1, char const *set)
{
	size_t	p;
	size_t	setl;
	size_t	o;

	if (!set)
		return (0);
	setl = ft_strlen(set);
	o = ft_strlen(s1);
	p = 0;
	while (p < setl && o > ft_start(s1, set))
	{
		if (s1[o - 1] == set[p])
		{
			o--;
			p = 0;
		}
		else
			p++;
	}
	return (o);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	size_t	i;
	size_t	o;
	size_t	t;

	if (!s1)
		return (0);
	i = ft_start(s1, set);
	o = ft_end(s1, set);
	t = (o - i);
	s = (char *)malloc(((sizeof(char) * (t + 1))));
	if (!s)
		return (0);
	if (s)
		ft_strlcpy(s, &s1[i], t + 1);
	return (s);
}
