#include"main.h"
/**
 * print_triangle - entry point
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: void
*/
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (i > j)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
		_putchar('\n');
		}
	}
}
