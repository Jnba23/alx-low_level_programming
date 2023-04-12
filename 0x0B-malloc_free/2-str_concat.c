#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * str_concat - concatenate two strings
 * @s1: the first string
 * @s2: the second string
 * Return: s or NULL
*/
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j;

	if (s1 == NULL)
	{
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	s = malloc((i + j + 1) * (sizeof(char)));
	if (s == 0)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		s[i + j] = s2[j];
	}
	return (s);
}
