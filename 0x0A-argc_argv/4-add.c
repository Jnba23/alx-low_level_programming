#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 * main - adds positive numbers
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i = 0, j;
	int s = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++ )
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if ((argv[i][j]) < 48 || (argv[i][j]) > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		s = s + atoi(argv[i]);
	}
	printf("%d\n", s);
	return (0);
}
