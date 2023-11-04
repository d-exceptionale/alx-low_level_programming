#include <stdio.h>

/**
 * main - prints the lower letters of the alphabet in reverse
 * followed by a new line.
 * Return: always 0 (success).
 */

int main(void)
{
	char c;

	for (c = 'z' ; c >= 'a' ; c--)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
