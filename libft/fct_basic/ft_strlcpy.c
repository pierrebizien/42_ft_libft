/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbizien <TBD>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:08:25 by pbizien           #+#    #+#             */
/*   Updated: 2022/11/01 17:18:07 by pbizien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && (i + 1 < n))
	{
		dst[i] = src[i];
		i++;
	}
	if (n > 0)
	{
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	while (src[count] != '\0')
		++count;
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (count);
}
*/

/*
int main()
{
	char src[] = "coucou";
	char dest[10]; ft_memset(dest, 'A', 10);
	printf("%ld\n", ft_strlcpy(dest, src, 2));
	printf("%c\n",dest[0]);
	int a;
	if (dest[0] == 'A')
		a = 32;
	printf("%d\n", a);
	printf("%c\n",dest[1]);
	printf("%c\n",dest[2]);

}*/