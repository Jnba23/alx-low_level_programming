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
		putchar (',');
		putchar (' ');
		d1++;
	}
	return (0);
}
