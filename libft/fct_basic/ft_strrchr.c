/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbizien <TBD>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:09:05 by pbizien           #+#    #+#             */
/*   Updated: 2022/11/01 17:20:05 by pbizien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	int				index;
	char			*temp;
	unsigned char	value;

	i = 0;
	temp = (char *)s;
	value = (unsigned char)c;
	index = -1;
	while (temp[i])
	{
		if (temp[i] == value)
		{
			index = i;
		}
		i++;
	}
	if (c == 0)
		return (temp + i);
	if (index > -1)
		return (temp + index);
	return (NULL);
}

/*
int	main()
{
	char s[] = "tripouille";

	printf("%s", ft_strrchr(s, 't' + 256));
	printf("%s", strrchr(s, 't' + 256));
}*/