#include<stdio.h>
#include"main.h"
/**
 * print_to_98 - entry point
 * print_to_98 - print all natural numbers from n to 98
 * @n: the natural number from which we start the count
 *Return: void
*/
void print_to_98(int n)
{
	int x;

	if (n < 98)
	{
		for (x = n; x < 98; x++)
		{
			printf("%d, ", x);
		}
	}
	else
	{
		for (x = n; x > 98; x--)
		{
			printf("%d, ", x);
		}
	}
	printf("98\n");
}
