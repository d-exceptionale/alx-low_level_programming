#include "main.h"

/**
 * _pow_recursion - raises x to the power of y
 * @x: number to be raised
 * @y: number to be raised to
 * Return: x to the power of y, or return -1 if x < 0..
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
