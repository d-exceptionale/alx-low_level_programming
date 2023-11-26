#include "main.h"

/**
 * _strspn - gets the lenghth of a prefix substring
 * @s: main string
 * @accept: prefix substring.
 * Return: number of bytes in s that consist of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, check, j = 0;
	unsigned int res = 0;

	while (s[j] != '\0')
	{
		check = 0;

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == s[j])
			{
				res++;
				check = 1;
			}
		}
		if (check == 0)
			return (res);
		j++;
	}

	return (res);
}
