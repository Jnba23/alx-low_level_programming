#include"main.h"
/**
 * print_rev - prints a string in reverse
 * @s : string in question
 * Return : void
*/
void print_rev(char *s)
{
	int i;
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
