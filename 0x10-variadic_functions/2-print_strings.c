#include"variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>
/**
 * print_strings - prints a string followed by a new line
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * Return: nothing.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *s;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
