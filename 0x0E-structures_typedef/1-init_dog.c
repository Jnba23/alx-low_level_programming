#include<stdio.h>
#include<stdlib.h>
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
	struct dog *pup;

	pup = d;
	pup = malloc(sizeof(struct dog));
	if (pup == NULL)
	{
		printf("ERROR");
	}
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
