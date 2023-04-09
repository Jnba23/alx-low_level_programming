#include"main.h"
/**
 * _strncat - This function appends the src string to the dest string
 * @src: source string
 * @dest: dest string
 * @n: int number
 * Return: *dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	for (len = 0; dest[len] != '\0'; len++)
	{
		;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}

