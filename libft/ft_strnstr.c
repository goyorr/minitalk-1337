/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:53:05 by zel-kach          #+#    #+#             */
/*   Updated: 2022/10/28 12:32:36 by zel-kach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int			i;
	size_t		p;
	char		*ho;
	char		*no;

	if (!haystack && len == 0)
		return (0);
	ho = (char *)haystack;
	no = (char *)needle;
	p = ft_strlen(no);
	i = 0;
	if (no[0] == '\0')
		return (ho);
	while (ho[i] != '\0' && len > p - 1)
	{
		if (ho[i] == no[0])
		{
			if (ft_strncmp(&ho[i], no, p) == 0)
				return (&ho[i]);
		}
		i++;
		len--;
	}
	return (0);
}
