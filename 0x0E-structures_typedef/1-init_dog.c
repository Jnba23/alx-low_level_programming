#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: a pointer to the variable to be initialized
 * @name: of the dog
 * @age: of the dog
 * @owner: of the dog
 * Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = malloc(strlen(name) + 1);
	if (d->name != NULL)
	{
		strcpy(d->name, name);
	}
	d->age = age;
	d->owner = malloc(strlen(owner) + 1);
	if (d->owner != NULL)
	{
		strcpy(d->owner, owner);
	}
}
