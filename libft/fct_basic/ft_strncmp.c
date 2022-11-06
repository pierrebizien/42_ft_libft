/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbizien <TBD>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:08:55 by pbizien           #+#    #+#             */
/*   Updated: 2022/11/01 17:13:01 by pbizien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] && i < n - 1)
	{
		i++;
	}
	if (n == 0)
		return (0);
	return (s1[i] - s2[i]);
}

/*
int main()
{
	printf("\n%d", ft_strncmp("1234", "1235", 3));
	printf("\n%d", strncmp("1234", "1235", 3));
}*/