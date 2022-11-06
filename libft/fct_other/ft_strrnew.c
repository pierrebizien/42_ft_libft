#include "libft.h"
#include <stdio.h>
#include <stdlib.h>


char *ft_strnew(size_t size)
{
	char	*str;

	str = ft_memalloc(size);
	ft_bzero(str, size);
	return (str);
}

/*
int main()
{
	char *str;

	str = ft_strnew(2);
	str[0] = "H";
	str[1] = "H";
	str[2] = "H";

	printf("%s", str);
}*/