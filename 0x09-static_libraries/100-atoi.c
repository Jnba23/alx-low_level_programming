#include<stdio.h>
#include"main.h"
/**
 * _atoi - convert an string to an integer
 * @s: the string in question
 * Return: int
*/
int _atoi(char *s)
{
	int i = 0;
	unsigned int num = 0;
	int sign = 1;

	while (s[i] != '\0')
	{
		if (s[i] == 45)
		{
			sign = sign * (-1);
		}
		else if (s[i] >= 48 && s[i] <= 57)
		{
			num = (num * 10 + (s[i] - 48));
			if (s[i + 1] < 48 || s[i + 1] > 57)
			{
				break;
			}
		}
		i++;
	}
	return (num * sign);
}
