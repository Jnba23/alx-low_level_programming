#include"main.h"
/**
 * _strlen - Entry point
 * @s: character in question
 * Return: integer
*/
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
	{
		count++;
	}
	return (count);
}
