/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbizien <TBD>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:09:00 by pbizien           #+#    #+#             */
/*   Updated: 2022/11/01 17:16:49 by pbizien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
//#include <bsd/string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	int		j;

	if (needle == NULL || ft_strlen(needle) == 0)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < n)
	{
		j = 0;
		while (haystack [i + j] && needle[j] == haystack[i + j] && i + j < n)
		{
			j++;
			if (!needle[j])
			{
				return ((char *)haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}

/*
int	main()
{
	printf("%s\n", ft_strnstr("aaabcabcd", "cd", 8));
	//printf("%s", strnstr("", "aabc", -1));
}*/