#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed in between strings
 * @n: number of strings to be printed
 * @...: variadic arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *str;

	if (n > 0)
	{
		va_start(ap, n);

		while (i < n)
		{
			str = va_arg(ap, char *);
			if (str == NULL)
				printf("nil");
			else
				printf("%s", str);
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
			i++;
		}
		va_end(ap);
	}
	printf("\n");
}
