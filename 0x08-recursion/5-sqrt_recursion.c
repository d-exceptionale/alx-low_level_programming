#include <stdio.h>
#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - returns natural square root of n.
 * @n: parameter
 * Return: -1 if number is not a perfect square.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - returns square root
 * @n: parameter 1
 * @i: iterator
 * Return: square root of n or -1 if n doesn't have a square root
 */

int _sqrt(int n, int i)
{
	int st = i * i;

	if (st == n)
		return (st);
	if (st > n)
		return (-1);
	return (_sqrt(n, i++));

}
