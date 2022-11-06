/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbizien <TBD>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:22:22 by pbizien           #+#    #+#             */
/*   Updated: 2022/11/01 17:22:24 by pbizien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*
void	ft_del(void *to_del)
{
	*(int *)to_del = 0;
}


int	main()
{
	t_list *elem1;
	t_list *begin_list;

	elem1 = malloc(sizeof(t_list *));
	int int1 = 5;
	elem1->content = &int1;
	begin_list = elem1;
	printf("%d\n", *(int *)begin_list->content);
	ft_lstdelone(begin_list, ft_del);
	printf("%d\n", *(int *)begin_list->content);	
}*/