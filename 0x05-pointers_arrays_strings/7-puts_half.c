#include"main.h"
/**
 * puts_half - prints half of a string
 * @str: the string in question
 * Return: void
*/
void puts_half(char *str)
{
	int len, a, b;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	len = a / 2;
	for (b = len; b <= a; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
