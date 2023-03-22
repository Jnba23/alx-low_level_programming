#include"main.h"
#include<stdio.h>
/**
 * print_alphabet - Entry point
 *
 * _putchar - prints c
 * Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
