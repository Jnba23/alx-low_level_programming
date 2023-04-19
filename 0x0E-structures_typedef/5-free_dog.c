#include"dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * free_dog - frees the memory allocated
 * @d: pointer to the structure
 * Return: void
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
