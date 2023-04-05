#include"main.h"
/**
 * _strstr -finds the first occurrence of the substring in the string
 * @haystack: the string in question
 * @needle: the substring
 * Return: a pointer or null
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, l = 0;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*(needle + l) != '\0')
	{
		l++;
	}
	while (*(haystack + i) != '\0')
	{
		for (j = 0; j < l; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			if (j == l - 1)
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (0);
}
