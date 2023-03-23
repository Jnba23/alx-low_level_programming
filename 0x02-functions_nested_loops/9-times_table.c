#include"main.h"
/**
 * times_table - entry point, prints time table of 9
 * Return: void
 *
*/
void times_table(void)
{
	int i;
	int y;
	int multiple;

	for (i = 0; i <= 9; i++)
	{
		for (y = 0; y <= 9; y++)
		{
			multiple = i * y;
			if (multiple < 10)
			{
				_putchar(' ');
				_putchar(multiple + 48);
			}
			else
			{
				_putchar((multiple / 10) + 48);
				_putchar((multiple % 10) + 48);
			}
			if (y == 9)
			{
				_putchar(' ');
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
