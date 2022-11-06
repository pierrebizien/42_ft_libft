/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbizien <TBD>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:05:48 by pbizien           #+#    #+#             */
/*   Updated: 2022/11/01 17:11:31 by pbizien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	value;
	unsigned char	*ptr_str;
	size_t			i;

	i = 0;
	value = (unsigned char)c;
	ptr_str = (unsigned char *)s;
	while (i < n)
	{
		if (ptr_str[i] == value)
		{
			return (ptr_str + i);
		}
		i++;
	}
	return (NULL);
}

/*
int	main()
{
	char str[] = "Hello Pierre";
	char c;
	char *output;

	c = 'P';
	output = ft_memchr(str, c, sizeof(str));
	printf("%s", output);
}*/