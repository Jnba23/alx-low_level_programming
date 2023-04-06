#include"main.h"
/**
 * _pow_recursion -  returns the value of x raised to the power of y
 * @x: the number
 * @y: the power value
 * Return: int
*/
int _pow_recursion(int x, int y)
{
	int p = 0;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	p = x * (_pow_recursion(x, y - 1));
	return (p);
}
