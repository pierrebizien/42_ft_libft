/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbizien <TBD>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:06:00 by pbizien           #+#    #+#             */
/*   Updated: 2022/11/01 17:13:20 by pbizien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ptr1[i] = ptr2[i];
		i++;
	}
	return (ptr1);
}

/*
int main()
{

	int dest1[5] = {0};
	int	src[5] = {6,7,8,9,8000000};

	ft_memcpy(dest1, src, sizeof(int) * 5);

	printf("%d ", dest1[0]);
	printf("%d ", dest1[1]);
	printf("%d ", dest1[2]);
	printf("%d ", dest1[3]);
	printf("%d ", dest1[4]);

}*/