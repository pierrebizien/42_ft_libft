/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbizien <TBD>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:06:49 by pbizien           #+#    #+#             */
/*   Updated: 2022/11/01 17:06:50 by pbizien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	letter;
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)b;
	letter = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		str[i] = letter;
		i++;
	}
	return (str);
}

/*
int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    char test[] = "Salut";
    printf("%s\n", test);
    ft_memset(test, 'a', 3);
    printf("%s\n", test);

}*/
