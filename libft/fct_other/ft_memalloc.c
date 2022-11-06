#include "libft.h"
#include <stdio.h>

void	*ft_memalloc(size_t size)
{
	void	*alloc;

	alloc = (void *)malloc(size);
	if (alloc == NULL)
		return (NULL);
	ft_bzero(alloc, size);
	return (alloc);
}
/*
int	main()
{
	char *test;
	test = ft_memalloc(1);
	test[0] = 'H'; 
	test[1] = 'e'; 
	test[2] = 'e'; 
	test[3] = 'e'; 
	test[4] = 'e'; 
	printf("%s", test);
}*/