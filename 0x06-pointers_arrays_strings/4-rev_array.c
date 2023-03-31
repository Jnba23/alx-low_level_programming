#include"main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array in question
 * @n: the number of element of the array
 * Return: void
*/
void reverse_array(int *a, int n)
{
	int i = 0, temp = 0;

	for (i = 0; i <= (n - 1) / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
