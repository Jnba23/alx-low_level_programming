#include"main.h"
/**
 * _strcat - This function appends the src string to the dest string
 * @src: source string
 * @dest: dest string
 * Return: *dest
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	int c = 0;
	int d = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		i++;
	}
	for (j = 0; dest[j] != '\0'; j++)
	{
		j++;
	}
	for (c = j + 1; c <= i + j + 2; c++)
	{
		if (c != i + j + 2)
		{
			dest[c] = src[d];
			d++;
		}
		else
		{
			dest[c] = '\0';
		}
	}
	return (dest);
}
