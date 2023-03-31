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
	int comp = 0, compT = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			comp = ((int) s1[i] - 48) - ((int) s2[i] - 48); 
			compT += comp;		
		}
		break;
	}
	return (compT);
}
