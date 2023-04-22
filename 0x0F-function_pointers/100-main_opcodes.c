#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * main - Entry point
 * @argc: number of args
 * @argv: arg vector
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	char *ptr = (char *)main;
	int a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (a--)
	{
		printf("%02hhx%s", *ptr++, a ? " " : "\n");
	}
	return (0);
}
