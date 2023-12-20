#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - gives the sum of two integers
 * @a: First integer
 * @b: Second integer
 * Return: sum of the two integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - gives the difference two integers
 * @a: First integer
 * @b: Second integer
 * Return: difference between two integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - gives the product of two integers
 * @a: First integer
 * @b: Second integer
 * Return: product of the two integers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - gives the quotient of two integers
 * @a: First integer
 * @b: Second integer
 * Return: quotient of the two integers
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - gives the modulo of two integers
 * @a: First integer
 * @b: Second integer
 * Return: modulo of the two integers
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
