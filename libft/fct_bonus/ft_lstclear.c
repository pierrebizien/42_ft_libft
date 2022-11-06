/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbizien <TBD>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:22:13 by pbizien           #+#    #+#             */
/*   Updated: 2022/11/01 17:27:32 by pbizien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*begin_list;

	if (!*lst || !lst || !del)
		return ;
	begin_list = *lst;
	while (begin_list)
	{
		temp = (begin_list)->next;
		ft_lstdelone(begin_list, del);
		begin_list = temp;
	}
	*lst = NULL;
}

// void	ft_lstclear(t_list **lst, void (*del)(void*))
// {
// 	t_list	*begin;

// 	if (!lst || !*lst)
// 		return ;
// 	while (*lst != NULL)
// 	{
// 		begin = (*lst)->next;
// 		ft_lstdelone((*lst), del);
// 		(*lst) = begin;
// 	}
// }