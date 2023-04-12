#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * _strdup - return a pointer to a new string
 * @str: pointer to the string in question
 * Return: NULL or a pointer to the duplicated string
*/
char *_strdup(char *str)
{
	int i;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		;
	s = malloc(i * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}
	return (s);

}
