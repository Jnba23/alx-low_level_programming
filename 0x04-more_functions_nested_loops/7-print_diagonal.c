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
	int j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (i != j)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(92);
				}
			}
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}

}
