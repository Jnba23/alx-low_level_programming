#include"main.h"
/**
 * _isupper - entry point
 * _isupper - checks if a character in uppercase
 * @c: the character checked
 * Return: the value 1 if c upper and 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
