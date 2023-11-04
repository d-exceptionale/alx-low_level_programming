#include <stdio.h>

/**
 * main - prints all lowercase alphabets and a new line.
 * print letters except q and e
 * Return: always 0 (success)
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		if (i == 'e' || i == 'q')
			continue;
		else
			putchar(i);
	}

	putchar('\n');
	return (0);
}
