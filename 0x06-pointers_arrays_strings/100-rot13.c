#include"main.h"
/**
 *  rot13 - encodes a string using rot13
 *  @s: the string to encript
 *  Return: an ancripted string
*/
char *rot13(char *s)
{
	int i = 0, j;
	char lowUpp[] = "ABCDEFJHIJKLMNOPQRSTUVWXYZabcsdefjhjklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(s + i))
	{
		for (j = 0; j < 52; j++)
		{
			if (*(s + i) == *(lowUpp + j))
			{
				*(s + i) = *(rot13 + j);
				break;
			}
		}
	i++;
	}
	return (s);
}
