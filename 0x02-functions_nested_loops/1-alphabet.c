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

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
