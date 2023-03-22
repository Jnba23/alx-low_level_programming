#include"main.h"
/**
 * print_last_digit - entry point
 * print_last_digit - prints the last digit
 * @n: the number in question
 * Return: the value of the last digit
*/
int print_last_digit(int n)
{
	int d;


	if (n > 0)
	{
		d = n % 10;
	}
	else
	{
		d = n % 10 * (-1);
	}
	return (d);
}
