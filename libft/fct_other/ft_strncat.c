#include "libft.h"
#include <stdio.h>

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	int	len;

	len = ft_strlen(dest);
	i = 0;
	while (src[i] && i < n)
	{
		dest[i + len] = src[i];
		i++;
	}
	dest[i + len] = '\0';
	return (dest);
}
