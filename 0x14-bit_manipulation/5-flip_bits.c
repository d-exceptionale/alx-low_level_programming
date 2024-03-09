#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: number to flip
 * @m: number to be flipped to
 * Return: number of bits you will have to flip in n to get m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_bit;
	unsigned int flip_counter = 0;

	xor_bit = n ^ m;

	while (xor_bit)
	{
		flip_counter++;
		xor_bit &= (xor_bit - 1);
	}

	return (flip_counter);
}
