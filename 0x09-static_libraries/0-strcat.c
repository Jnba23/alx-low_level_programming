#include"main.h"
/**
 * _strcat - This function appends the src string to the dest string
 * @src: source string
 * @dest: dest string
 * Return: *dest
*/
char *_strcat(char *dest, char *src)
{
	int j;
	int i;

	for (j = 0; dest[j] != '\0'; j++)
	{
		j++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
