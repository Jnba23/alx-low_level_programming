#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int d1;
	int d2 = 48;

	for (d1 = 48; d1 <= 57; d1++)
	{
		putchar(d1);
		while (d2 <= 57)
		{
		if (d2 >= d1)
		{
		putchar(d2);
		putchar(',');
		putchar(' ');
		}
		else
		{
		continue;
		}
		d2++;	
		}
	}
	putchar('\n');
	return (0);
}
