#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: the number to work on
 * @index: the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	for (hold = 1; index > 0; index--, hold *= 2)
		;

	hold = ~hold;
	*n = *n & hold;

	return (1);

}
