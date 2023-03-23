#include"main.h"
/**
 * print_line - entry point
 * print_line - print a line using '_'
 * @n: number of times '_' will be printed
 * Return: void
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
