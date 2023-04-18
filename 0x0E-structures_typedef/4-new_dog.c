#include<stdio.h>
#include<stdlib.h>
#include"dog.h"
/**
 * new_dog - create a new dog and return a pointer to the structure dog_t
 * @name: name of the dog
 * @age: of the dog
 * @owner: of the dog
 * Return: a pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
