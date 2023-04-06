#include"main.h"
/**
 * factorial - calculates the factorial of n
 * @n: the number in question
 * Return: the factorial of n or -1 for error
*/
int factorial(int n)
{
	int fact;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	fact = n * factorial(n - 1);
		return (fact);


}
