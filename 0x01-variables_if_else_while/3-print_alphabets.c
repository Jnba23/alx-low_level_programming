#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char Uletter = 'A';
	char Lletter = 'a';

	while (Lletter <= 'z')
	{
		putchar(Lletter);
		Lletter++;
	}
	while (Uletter <= 'Z')
	{
		putchar(Uletter);
		Uletter++;
	}
	putchar('\n')
	return (0);
}
