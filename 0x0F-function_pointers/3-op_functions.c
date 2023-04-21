#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds two numbers
 * @a: the first integer number
 * @b: the second integer number
 * Return: sum of the two numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substact two numbers
 * @a: the first integer number
 * @b: the second integer number
 * Return: difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: the first integer number
 * @b: the second integer number
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: the first integer
 * @b: the second integer
 * Return: result of the division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo of two numbers
 * @a: the first number
 * @b: the second number
 * Return: remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
