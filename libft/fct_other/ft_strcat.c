#include "libft.h"
#include <stdio.h>

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	len;

	len = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[i + len] = src[i];
		i++;
	}
	dest[i + len] = '\0';
	return (dest);
}

/*
int	main()
{
	char	dest[10] = "Pier";
	char	src[] = "Hell";
	char	str[] = "Heo";

	ft_strcat(dest, src);
	printf("%s\n", dest);
	printf("%s\n", src);
	printf("%s\n", str);
}*/
