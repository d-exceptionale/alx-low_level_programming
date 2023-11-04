#include <stdio.h>

/**
 * main - prints all possible combination of two digit numbers.
 * Return: always 0 (success)!
 */

int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);

		if (i < '9')
		{
			putchar(',');
			putchar(' ');
		}
		else
			continue;
	}

	return (0);
}
