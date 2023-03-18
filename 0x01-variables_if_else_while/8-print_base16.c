#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int num = 48;
	int alph = 97;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	while (alph <= 102)
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
