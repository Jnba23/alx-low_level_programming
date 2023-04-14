#include"main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: members of the array
 * @size: size of each element of the array
 * Return: pointer to the memory allocated
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		((char *)a)[i] = 0;
	}
	free(a);
	return (a);
}
