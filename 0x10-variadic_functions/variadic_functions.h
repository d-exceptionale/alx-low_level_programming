#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

/**
 * struct select_form - contains the format of a variable and 
 * points to a function that prints using that format.
 * @oper: format to be printed.
 * @func: function that prints a specified format
 */

typedef struct select_form
{
	char *oper;
	void (*func)(va_list, char *);
} for_mat;

void print_char(va_list ap, char *separator);
void print_int(va_list ap, char *separator);
void print_float(va_list ap, char *separator);
void print_string(va_list ap, char *separator);

#endif
