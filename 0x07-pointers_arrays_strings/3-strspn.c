#include"main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string in question
 * @accept: strings of bytes that constitutes the substring
 * Return: unsigned int
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;
	int l = 0;

	while (accept[l] != '\0')
	{
		l++;
	}
	while (*(s + i) != '\0')
	{
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
			{
				i++;
				j = 0;
				continue;
			}
			else
			{
				if (j == (l - 1))
				{
					return (i);
				}
				else
				{
					j++;
					continue;
				}
			}
		}
	}
	return (i);
}
