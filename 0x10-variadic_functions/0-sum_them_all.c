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
	int sum = 0;
	int num;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);

		if (num != (int)num)
		{
			/* Check if num is not an integer */
			va_end(args);
			return (0); /* Return 0 to indicate an error */
		}
		sum += num;
	}
	va_end(args);
	return (sum);
}
