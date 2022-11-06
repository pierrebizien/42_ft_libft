/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbizien <TBD>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:08:00 by pbizien           #+#    #+#             */
/*   Updated: 2022/11/01 17:13:16 by pbizien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	value;
	char			*temp;

	value = (unsigned char)c;
	temp = (char *)s;
	i = 0;
	while (temp[i])
	{
		if (temp[i] == value)
		{
			return (temp + i);
		}
		i++;
	}
	if (c == 0)
		return (temp + i);
	return (NULL);
}

/*
int	main()
{
	char s[] = "tripouille";
	printf("%s\n", ft_strchr(s, 0));
	printf("%s\n", ft_strchr(s, 0));
}
*/