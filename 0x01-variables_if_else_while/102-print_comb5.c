#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int d1, d2, d3, d4;

	for (d1 = 48; d1 <= 57; d1++)
	{
		for (d2 = 48; d2 <= 57; d2++)
		{
			for (d3 = 48; d3 <= 57; d3++)
			{
				for (d4 = 48; d4 <= 57; d4++)
				{
					if ((d1 + d2) < (d3 + d4))
					{
						putchar(d1);
						putchar(d2);
						putchar(' ');
						putchar(d3);
						putchar(d4);
					if ((d1 + d2) != 113 || (d3 + d4) != 114)
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
