#include"main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: pointer to a string of characters
 * Return: char
*/
char *string_toupper(char *str)
{
	int i, l;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < l; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
