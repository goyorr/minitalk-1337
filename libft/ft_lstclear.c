/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:55:32 by zel-kach          #+#    #+#             */
/*   Updated: 2022/10/27 15:49:17 by zel-kach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lol;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		lol = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = lol;
	}
}
