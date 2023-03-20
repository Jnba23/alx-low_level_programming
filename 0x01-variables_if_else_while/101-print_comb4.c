#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int d1;
	int d2;
	int d3;

	for (d1 = 48; d1 <= 57; d1++)
	{
		for (d2 = 48; d2 <= 57; d2++)
		{
			for (d3 = 48; d3 <= 57; d3++)
			{
				if (d1 < d2)
				{
					if (d2 < d3)
					{
						putchar(d1);
						putchar(d2);
						putchar(d3);
						if (d1 != 55 || d2 != 56 || d3 != 57)
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
