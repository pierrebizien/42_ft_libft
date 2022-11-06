/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbizien <TBD>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:03:36 by pbizien           #+#    #+#             */
/*   Updated: 2022/11/01 17:03:38 by pbizien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
	{
		return (1);
	}
	else
		return (0);
}

/*
int main()
{
	printf("%d", ft_isalnum('o'));
}*/