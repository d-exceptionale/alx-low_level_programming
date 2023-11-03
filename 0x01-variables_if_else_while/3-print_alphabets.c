#include <stdio.h>

/**
 * main - prints all lowercase alphabets followed by uppercase alphabets
 * and a new line.
 * Return: always 0 (success)
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		putchar(i);
	}

	for (i = 'A' ; i <= 'Z' ; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
