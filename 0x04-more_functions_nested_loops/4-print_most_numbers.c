#include"main.h"
/**
 *  print_most_numbers - entry point
 *  print_most_numbers - prints most numbers
 *  Return: void
*/
void print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n == 50 || n == 52)
		{
			continue;
		}
		else
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
