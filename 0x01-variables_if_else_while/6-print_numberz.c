#include <stdio.h>

/**
 * main - prints single numbers of base 10 starting from 0,
 * using putchar and followed by a newline
 * Return: always 0 (works!)
 */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
