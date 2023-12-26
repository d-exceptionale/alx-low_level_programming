#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of type of arguments passed to the function
 * @...: variadic arguments.
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, ct = 0;
	char *separator = "";
	for_mat formats[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(ap, format);
	while (format != NULL && format[ct] != '\0')
	{
		i = 0;
		while (i < 4)
		{
			if (format[ct] == *formats[i].oper)
			{
				formats[i].func(ap, separator);
				separator = ", ";
			}
			i++;
		}
		ct++;
	}
	va_end(ap);
	printf("\n");
}

/**
 * print_char - prints a char to stdout
 * @separator: string used to separate from next print
 * @ap: new variable to be printed
 */

void print_char(va_list ap, char *separator)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * print_int - prints an integer to stdout
 * @separator: string used to separate from next print
 * @ap: new variable to be printed
 */

void print_int(va_list ap, char *separator)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
 * print_float - prints a float to stdout
 * @separator: string used to separate from next print
 * @ap: new variable to be printed
 */

void print_float(va_list ap, char *separator)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
 * print_string - prints a string to stdout
 * @separator: string used to separate from next print
 * @ap: new variable to be printed
 */

void print_string(va_list ap, char *separator)
{
	char *str = va_arg(ap, char *);

	if (str != NULL)
	{
		printf("%s%s", separator, str);
		return;
	}
	printf("%s(nill)", separator);
}
