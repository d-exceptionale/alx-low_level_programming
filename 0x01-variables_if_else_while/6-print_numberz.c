#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * followed by a new line.
 * Return: always 0 (success).
 */

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);

		i++;
	}

	putchar('\n');
	return (0);
}
