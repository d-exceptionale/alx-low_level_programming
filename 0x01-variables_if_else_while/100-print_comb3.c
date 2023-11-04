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
		for (j = i + 1 ; j <= '9' ; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);

				if (!(i == '8' && j == '9'))
				{
					putchar(',');
					putchar(' ');
				}
				else
					continue;
			}
		}
	}

	putchar('\n');
	return (0);
}
