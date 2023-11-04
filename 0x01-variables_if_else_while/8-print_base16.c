#include <stdio.h>

/**
 * main - prints all the digits of a hexadecimal in lower case
 * followed by a new line.
 * Return: always 0 (success)!
 */

int main(void)
{
	int i;
	char c;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
	}

	for (c = 'a' ; c <= 'f' ; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
