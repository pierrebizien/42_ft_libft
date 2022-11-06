/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbizien <TBD>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:03:08 by pbizien           #+#    #+#             */
/*   Updated: 2022/11/01 17:11:37 by pbizien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	if ((nmemb == SIZE_MAX && size > 1) || (size == SIZE_MAX && nmemb > 1))
		return (NULL);
	str = (void *)malloc(nmemb * size);
	if (!str)
		return (NULL);
	ft_bzero(str, nmemb * size);
	return (str);
}
/*
int	main()
{
	int *str;

	str = calloc(5, sizeof(int));
	str[0] = 'H';
	str[1] = 'e';
	str[2] = 'l';
	str[3] = 'l';
	str[4] = 'o';
	printf("%d", str[2]);
}
*/