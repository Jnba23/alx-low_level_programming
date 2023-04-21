#include<stdio.h>
#include"variadic_functions.h"
#include<stdarg.h>
/**
 * sum_them_all -  sum all parameters of the function
 * @n: the first parameter
 * Return: int
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	unsigned int sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
