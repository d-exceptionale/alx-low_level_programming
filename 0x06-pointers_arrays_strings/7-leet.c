#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @str: string to be encoded.
 * Return: pointer to encoded string.
 */

char *leet(char *str)
{
	int a = 0, b;
	char d_str[5] = {'a', 'e', 'o', 't', 'l'};
	char d_code[5] = {'4', '3', '0', '7', '1'};

	while (str[a])
	{
		b = 0;
		while (b < 5)
		{
			if (str[a] == d_str[b] || str[a] + 32 == d_str[b])
				str[a] = d_code[b];
			b++;
		}

		a++;
	}

	return (str);
}
