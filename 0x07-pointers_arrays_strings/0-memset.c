#include"main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: point to a memory area
 * @b: constant byte
 * @n: first bytes of the memory area pointed to by s
 * Return: a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; (unsigned int)i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
