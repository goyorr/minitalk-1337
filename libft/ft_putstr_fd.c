/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 18:21:29 by zel-kach          #+#    #+#             */
/*   Updated: 2022/10/23 10:18:03 by zel-kach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;
	int	strlen;

	if (!s)
		return ;
	i = 0;
	strlen = ft_strlen(s);
	while (i < strlen)
	{
		write(fd, &s[i], 1);
		i++;
	}
}
