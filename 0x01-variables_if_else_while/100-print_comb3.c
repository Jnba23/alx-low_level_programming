#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int d1 = 48;
	int d2 = 48;

	for (d1 = 48; d1 <= 57; d1++)
	{
		putchar(d1);
		while (d2 <= 57)
		{
		if (d1 >= d2)
		{
		continue;
		d2++;
		}
		else
		{
		putchar(d2);
		putchar(',');
		putchar(' ');
		d2++;
		}
		}
	}
	putchar('\n');
	return (0);
}
