#include"main.h"
/**
 * print_diagonal - entry point
 * print_diagonal - print a diagonal line on the terminal
 * @n: the number of times where the character '\' is printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			if (i == 1)
			{
				continue;
			}
			else
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
