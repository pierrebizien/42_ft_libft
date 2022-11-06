#include "libft.h"
#include <stdio.h>

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int	main()
{
	char	dest[] = "Pier";
	char	src[] = "Hellooooooooooooooooooooooooooooooooooooooooooooo";
	char	str[] = "Heo";

	ft_strncpy(dest, src, 2);
	printf("%s\n", dest);
	printf("%s\n", src);
	printf("%s\n", str);
}*/