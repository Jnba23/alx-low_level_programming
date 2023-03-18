#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int d1 = 48;

	while (d1 <= 57)
	{
		putchar (d1);
		if (d1 < 57)
		{
			putchar(',');
			putchar(' ');
			d1++;
		}
		else
		{
		continue;
		}
	}
	return (0);
}
