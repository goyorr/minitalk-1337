/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 07:23:14 by zel-kach          #+#    #+#             */
/*   Updated: 2022/10/27 11:14:51 by zel-kach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	node_count;

	node_count = 0;
	while (lst)
	{
		node_count++;
		lst = lst->next;
	}
	return (node_count);
}
