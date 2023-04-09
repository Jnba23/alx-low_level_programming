#include"main.h"
/**
 * _memcpy - copies memory area
 * @src: memory area source
 * @dest: memory area destination
 * @n: number of bytes from memory
 * Return: a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; (unsigned int)i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
