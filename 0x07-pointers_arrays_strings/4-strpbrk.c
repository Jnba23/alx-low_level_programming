#include"main.h"
/**
 * _strpbrk - locates the first occurrence in the string s
 * @s: string in question
 * @accept: control string
 * Return: character
*/
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	if (*(s + i) == '\0' || *(accept + j) == '\0')
	{
		return (0);
	}
	while (*(s + i))
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				return (&(*(s + i)));
			}
			else
			{
				j++;
				continue;
			}
		}
	i++;
	}
	return (0);
}
