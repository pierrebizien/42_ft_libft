/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbizien <TBD>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:08:49 by pbizien           #+#    #+#             */
/*   Updated: 2022/11/01 17:09:29 by pbizien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*str;
	unsigned int		i;

	i = 0;
	str = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!str)
		return (str);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
 char my_func(unsigned int i, char str)
 {
 	printf("My inner function: index = %d and %c\n", i, str);
 	return str - 32;
 }
	int main()
 {
 	char str[10] = "hello.";
 	printf("The result is %s\n", str);
 	char *result = ft_strmapi(str, my_func);
 	printf("The result is %s\n", result);
 	return 0;
 }*/