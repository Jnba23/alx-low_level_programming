#include"main.h"
/**
 * cap_string -  capitalizes all words of a string
 * @s: string in question
 * Return: char
*/
char *cap_string(char *s)
{
	int i = 0, j = 0;
	char arr[] = " \t\n,;.!?\"(){}";

	while (*(s + i)) /*same as s[i] != '\0'*/
	{
		if (*(s + i) >= 97 && *(s + i) <= 122)
		{
			if (i == 0)
			{
				s[i] = s[i] - 32;
			}
			else
			{
				for (j = 0; j <= 12; j++)
				{
				if (arr[j] == s[i - 1])
				{
				 s[i] = s[i] - 32;
				}
				}
			}
		}
	i++;
	}
	return (s);
}
