#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char letter = 'z';

	while (letter >= 'A')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
