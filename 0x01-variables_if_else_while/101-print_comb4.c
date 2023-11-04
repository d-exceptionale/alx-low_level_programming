#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * followed by a new line.
 * Return: always 0 (success)!
 */

int main(void)
{
	int i, j, k;

	for (i = '0' ; i <= '9' ; i++)
	{
		for (j = i + 1 ; j <= '9' ; j++)
		{
			for (k = j + 1 ; k <= '9' ; k++)
			{
				if (!(i == j && j == k))
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (!(i == '7' && j == '8' && k == '9'))
					{
						putchar(',');
						putchar(' ');
					}
					else
						continue;
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
