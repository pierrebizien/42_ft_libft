/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbizien <pbizien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:06:40 by pbizien           #+#    #+#             */
/*   Updated: 2022/11/08 09:32:31 by pbizien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The  memmove()  function  copies  n  bytes from memory area src to memory 
// area dest.  The memory areas may overlap: copying takes
// place as though the bytes in src are first copied into a temporary
// array that does not overlap src or dest,  and  the  bytes  are
// then copied from the temporary array to dest

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;
	unsigned char	*temp;
	size_t			i;

	i = 0;
	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	temp = (unsigned char *)malloc(sizeof(ptr_src));
	ft_memcpy(temp, ptr_src, sizeof(ptr_src));
	while (i < n)
	{
		ptr_dest[i] = temp[i];
		i++;
	}
	free(temp);
	return (ptr_dest);
}

/*
int	main()
{
	char str[] = "HelloPierre";
	char str2[] = "HelloPierre";
	
	printf("src %s\n", str);
	ft_memmove(str + 2, str + 1, 4);
	ft_memcpy(str2 + 2, str2 + 1, 4);
	printf("Move %s\n", str);
	printf("CPY %s\n", str2);

}*/