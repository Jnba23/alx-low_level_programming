#include"main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: the first string
 * @s2: the second string
 * @n: number of first bytes of s2
 * Return: s or null
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int i, j, l1, l2;

	l1 = strlen(s1);
	l2 = strlen(s2);
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s = malloc((strlen(s1) + n + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	/* copying the first string to s */
	for (i = 0; i < l1; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < (int)n && j < l2; j++)
	{
		s[i + j] = s2[j];
	}
	s[i + j] = '\0';
	return (s);
}
