#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * alloc_grid - return a pointer to a two dimentional array of integers
 * @width: the width of the array
 * @height: the height of the array
 * Return: a pointer or NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **a;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = malloc(height * sizeof(int *));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			while (i >= 0)
			{
				free(a[i]);
				i--;
			}
			free(a);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
	{
		a[i][j] = 0;
	}
	return (a);
}