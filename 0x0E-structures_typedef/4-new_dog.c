#include<stdio.h>
#include<stdlib.h>
#include"dog.h"
/**
 * _strlen - count the lenght of a string
 * @s: the tring in question
 * Return: int
*/
int _strlen(char *s)
{
	int i, l = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		l++;
	}
	return (l);
}
/**
 * _strcpy - copy a string from src to dest
 * @src: source string
 * @dest: destination string
 * Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
/**
 * new_dog - create a new dog and return a pointer to the structure dog_t
 * @name: name of the dog
 * @age: of the dog
 * @owner: of the dog
 * Return: a pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_pup;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}
	new_pup = malloc(sizeof(dog_t));

	if (new_pup == NULL)
	{
		return (NULL);
	}
	new_pup->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (new_pup->name == NULL)
	{
		free(new_pup);
		return (NULL);
	}
	new_pup->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (new_pup->owner == NULL)
	{
		free(new_pup->name);
		free(new_pup);
		return (NULL);
	}
	new_pup->name = _strcpy(new_pup->name, name);
	new_pup->age = age;
	new_pup->owner = _strcpy(new_pup->owner, owner);
	return (new_pup);
}
