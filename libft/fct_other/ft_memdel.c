#include "libft.h"
#include <stdlib.h>

void ft_memdel(void **ap)
{
	if (ap != NULL || ap != NULL)
	{
		free(*ap);
		*ap = NULL;
	}
}

/*
int main()
{
	char *a;

	a = NULL;
	a = ft_memalloc(5);
	a[0] = 'e';
	printf("avant le free a vaut %s\n", a);
	ft_memdel((void **)a);
	printf("après le free a vaut %s\n", a);
}*/