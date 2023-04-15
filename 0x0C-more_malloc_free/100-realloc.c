#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 * _realloc - reallocate a memory block using malloc and free
 * @ptr: pointer to the old memory block
 * @old_size: the old size of the memory block
 * @new_size: the new size of the memory block
 * Return: NULL or pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p1;
	char *p;
	int i;

	p1 = ptr;
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			return (NULL);
		}
		return (p);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < (int)old_size; i++)
		{
			p[i] = p1[i];
		}
		free(ptr);
		return (p);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && !(ptr == NULL))
	{
		free(ptr);
		return (NULL);
	}
	return (NULL);

}
