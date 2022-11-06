#include "libft.h"
#include <stdio.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	char	*temp_haystack;
	int		j;

	i = 0;
	temp_haystack = (char *)haystack;
	j = 0;
	while (haystack[i])
	{
		if (haystack[i] == needle[j] && needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return (temp_haystack + (i - (j - 1)));
		}
		else
			j = 0;
		i++;
	}
	return (NULL);
}

/*
int	main()
{
	printf("%s", ft_strstr("Bonjour amon ami", " "));
}*/