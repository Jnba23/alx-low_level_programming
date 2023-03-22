#include"main.h"
/**
 * print_sign - prints the sign of a number
 *
 * @n: the number to be checked
 *
 * Return: print_sign return 0, 1, -1 depending of the num sign
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0);
		return (0);
	}
}
