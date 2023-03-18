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

	while (d1 <= 57 && d2 <=57)
	{
		if (d1 == d2)
		{
		continue;
		d2++;
		}
		putchar (d1);
		putchar (d2);
		putchar (',');
		putchar (' ');
		d1++;
		d2++;
	}
	return (0);
}
