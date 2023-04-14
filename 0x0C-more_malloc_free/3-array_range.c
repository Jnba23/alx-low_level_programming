#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 * array_range - create an array of integers
 * @min: min range
 * @max: maximum range
 * Return: Null ot pointer
*/
int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc((max - min + 1) * sizeof(int));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (max - min + 1); i++)
	{
		a[i] = min + i;
	}
	return (a);
}
