#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line.
 * @s: string to be printed
 * Return: Nothing!
 */

void _puts_recursion(char *s)
{
	char str;

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	str = s[0];
	_putchar(str);
	_puts_recursion(s + 1);
}
