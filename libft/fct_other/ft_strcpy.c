#include "libft.h"
#include <stdio.h>

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main()
{
	char	dest[] = "Pier";
	char	src[] = "Hellooooooooooooooooooooooooooooooooooooooooooooo";
	char	str[] = "Heo";

	ft_strcpy(dest, src);
	printf("%s\n", dest);
	printf("%s\n", src);
	printf("%s\n", str);
}*/
