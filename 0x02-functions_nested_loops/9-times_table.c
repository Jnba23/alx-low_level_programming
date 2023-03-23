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

	for (i = 48; i <= 57; i++)
	{
		for (y = 48; y <= 57; y++)
		{
			multiple = i * y;
			if (multiple < 10)
			{
				_putchar(' ');
				_putchar(multiple);
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
