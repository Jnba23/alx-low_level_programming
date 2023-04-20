#include<stdio.h>
#include"function_pointers.h"
/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to the array
 * @size: if the array
 * @action: pointer to the function we need to use
 * Return: nothing.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
