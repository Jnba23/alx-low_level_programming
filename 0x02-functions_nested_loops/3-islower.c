#include"main.h"
/**
 * _islower - entry point
 *
 * @c: the char to check
 *
 * -islower - check if a char is lowercase
 *
 * Return: returns 0 or 1
 *
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
