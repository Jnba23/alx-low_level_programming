#include"main.h"
/**
 * more_numbers - prints 10 the numbers for 0 to 14
 * Return: void
*/
void more_numbers(void)
{
	int d, u;

	for (d = 0; d < 10; d++)
	{
		for (u = 0; u <= 14; u++)
		{
			if (u > 9)
			{
				_putchar(49);
			}
			_putchar((u % 10) + 48);
		}
		_putchar('\n');
	}
}
