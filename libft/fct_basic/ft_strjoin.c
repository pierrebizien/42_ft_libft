/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbizien <TBD>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:08:11 by pbizien           #+#    #+#             */
/*   Updated: 2022/11/01 17:08:37 by pbizien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*output;
	int		i;
	int		j;

	len = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	output = (char *)ft_calloc(len + 1, sizeof(char));
	if (output == NULL)
		return (NULL);
	while (s1[i])
	{
		output[i] = s1[i];
		i++;
	}
	j = i;
	i = 0;
	while (s2[i])
	{
		output[j] = s2[i];
		i++;
		j++;
	}
	output[j] = '\0';
	return (output);
}

/*
int	main()
{
	char str[] = "Hello";
	char str2[] = "fff";
	char *output;

	output = ft_strjoin(str, str2);
	printf("%s", output);
}*/
