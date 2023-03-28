#include"main.h"
/**
 * _strcpy - copies a string pointed to including the null byte to the buffer
 * @dest: the buffer
 * @src: the string pointed to in question
 * Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i, count;

	count = 0;
	while (src[count] != '\0')
	{
		count++;
	}

	for (i = 0; i <= count + 1; i++)
	{
		if (i != count + 1)
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}
