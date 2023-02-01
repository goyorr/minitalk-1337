/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 08:26:41 by zel-kach          #+#    #+#             */
/*   Updated: 2022/11/09 08:12:30 by zel-kach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_num_words(char const *s, char c)
{
	int	count;
	int	i;
	int	found;

	i = 0;
	count = 0;
	found = 1;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			if (found == 1)
			{
				count++;
			}
			found = 0;
		}
		else
			found = 1;
		i++;
	}
	return (count);
}

static char	*get_word(char const *s, char c)
{
	int		len;
	char	*r;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	r = malloc(len + 1);
	if (r == NULL)
		return (NULL);
	return (r);
}

char	**ft_split(char const *s, char c)
{
	int		i_string;
	int		ver;
	int		hor;
	char	**result;

	if (!s)
		return (0);
	ver = 0;
	i_string = 0;
	result = (char **)malloc(sizeof(char *) * (count_num_words(s, c) + 1));
	if (result == NULL)
		return (NULL);
	while (ver < count_num_words(s, c))
	{
		hor = 0;
		while (s[i_string] && s[i_string] == c)
			i_string++;
		result[ver] = get_word(&s[i_string], c);
		free(get_word(&s[i_string], c));
		while (s[i_string] && s[i_string] != c)
			result[ver][hor++] = s[i_string++];
		result[ver++][hor] = 0;
	}
	result[ver] = (NULL);
	return (result);
}
