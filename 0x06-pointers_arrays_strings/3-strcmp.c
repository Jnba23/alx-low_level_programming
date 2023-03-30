#include"main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: int comp
*/
int _strcmp(char *s1, char *s2)
{
	int i;
	int comp;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			comp = 0;
		}
		else if (s1[i] < s2[i])
		{
			comp = -1;
		}
		else
		{
			comp = 1;
		}
	}
	return (comp);
}
