#include <stdio.h>

/**
 * main - prints all possible combination of two digit numbers.
 * Return: always 0 (success)!
 */

int main(void)
{
	int i, j;

	for (i = '0' ; i <= '9' ; i++)
	{
		for (j = '0' ; j <= '9' ; j++)
		{
			putchar(i);
			putchar(j);

			if (i < '9' || j < '9')
			{
				putchar(',');
				putchar(' ');
			}
			else
				continue;
		}
	}

	return (0);
}
