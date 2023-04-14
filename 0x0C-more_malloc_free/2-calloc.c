#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: members of the array
 * @size: size of each element of the array
 * Return: pointer to the memory allocated
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	/*char *b;*/
	/*unsigned int i;*/

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}
	/*b = a;*/
	/**
	 * for (i = 0; i < nmemb * size; i++)
	 * {
	 * a[i] = 0;
	 * }
	 */
	memset(a, 0, nmemb * size);
	return (a);
}
