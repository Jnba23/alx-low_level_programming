#include"main.h"
/**
 * puts_half - prints half of a string
 * @str: the string in question
 * Return: void
*/
void puts_half(char *str)
{
	int a, b;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	if (a % 2 == 0)
	{
		for (b = a / 2; str[b] != '\0'; b++)
		{
			_putchar(str[b]);
		}
	}
	else
	{
		for (b = (a - 1) / 2; str[b] != '\0'; b++)
		{
			_putchar(str[b]);
		}
	}
	_putchar('\n');
}
