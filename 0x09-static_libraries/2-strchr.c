#include"main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string in question
 * @c: the char in question
 * Return: returns a pointer, or the null value
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) >= '\0')
	{
		if (*(s + i) == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
