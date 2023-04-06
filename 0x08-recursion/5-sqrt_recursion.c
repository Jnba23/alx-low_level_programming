#include"main.h"
/**
 * _sqrt_recursion - calculate the square value of n
 * @n: the number in question
 * Return: int
*/
int square(int n, int i);
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (square(n, 2));
	}
}
/**
 * square - find the square root of n
 * @n: the number in question
 * @i: the square root of n
 * Return: i
*/
int square(int n, int i)
{
	if (n == i * i)
		return (i);
	else if (n > i * i)
		return (square(n, i + 1));
	else
		return (-1);

}
