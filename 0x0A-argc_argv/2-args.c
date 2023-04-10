#include"main.h"
#include<stdio.h>
/**
 * main - entry point
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc - 1; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
