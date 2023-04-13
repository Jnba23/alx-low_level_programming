#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: amount of memory that we want to allocate
 * Return: pointer
*/
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
