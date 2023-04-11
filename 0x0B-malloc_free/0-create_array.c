#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *  create_array - creates an array of chars
 *  @size: size of the array of characters
 *  @c: the characters of the array
 *  Return: a pointer to the array or NULL
*/
char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	s = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < (int)size; i++)
	{
		s[i] = c;
	}
	return (s);
}
