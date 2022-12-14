#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * and prints a new line
 * Return: Always 0 (works!)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
