#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: first argument known to the function
 * @...: variadic arguments
 * Return: sum of all arguments provided, both known and unknown(variadic)
 * also returns 0 if n == 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int res = 0;
	unsigned int i = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	while (i < n)
	{
		res += va_arg(ap, int);
		i++;
	}

	va_end(ap);

	return (res);
}
