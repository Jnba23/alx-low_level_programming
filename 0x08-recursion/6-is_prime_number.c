#include"main.h"
/**
 * is_prime_number - define if n is a prime number
 * prime - see if n is prime
 * @i: the factors of n
 * @n: the number in question
 * Return: 0 or 1
 * return: 0 or 1
*/
int prime(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n > 1)
		return (prime(n, 2));
	return (0);
}
/**
 * prime - see if n is prime
 * @n: the number
 * @i: the factors of n
 * Return: 1 or 0
*/
int prime(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	else if (i * i > n)
	{
		return (1);
	}
	else
	{
		return (prime(n, i + 1));
	}
}
