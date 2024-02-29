#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: pointer to strings of 0 and 1
 * Return: converted number or 0 if at least one char in the string
 * is neither 0 nor 1 or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int denary = 0, n = 1;
	int bct;

	if (b == NULL)
		return (0);

	for (bct = 0; b[bct]; bct++)
	{
		if (b[bct] != '0' && b[bct] != '1')
			return (0);
	}

	bct = bct - 1;
	while (bct >= 0)
	{
		if (b[bct] == '1')
			denary = denary + n;
		n = n * 2;
		bct--;
	}

	return (denary);
}
