#include<stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * main - prints '_putchar'
 *
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	char string[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');
	return (0);
}
