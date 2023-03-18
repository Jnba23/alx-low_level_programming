#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter = 97; 

	while (letter <= 122 && !(letter == 113 && letter == 101))
	{
	putchar(letter);
	letter++;
	}
	return(0);
}
