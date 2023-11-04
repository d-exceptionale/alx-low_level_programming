#include <stdio.h>

/**
 * main - prints all possible combinations of two - two digits numbers
 * followed by a new line
 * Return: always 0 (success)!
 */

int main(void)
{
	int p, q;

	for (p = 0; p <= 98; p++)
	{

		for (q = p + 1; q <= 99; q++)
		{
			putchar((p / 10) + '0');
			putchar((p % 10) + '0');
			putchar(' ');
			putchar((q / 10) + '0');
			putchar((q % 10) + '0');
			if (p == 98 && q == 99)
				continue;
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
