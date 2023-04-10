#include<stdlib.h>
#include<stdio.h>
/**
  * main - multiply two numbers
  * @argc: arguments count
  * @argv: array of arguments
  * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
