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

	while (i <= n)
	{
		if (i <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
			_putchar('\n');
		}
	}
}
