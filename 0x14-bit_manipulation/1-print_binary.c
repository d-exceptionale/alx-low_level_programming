#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 * Return: nothing,just print binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int shift;

	if (n == 0)
	{
		printf("0");
		return;
	}
	for (temp = n, shift = 0; (temp >>= 1) > 0; shift++)
		;

	while (shift >= 0)
	{
		if ((n >> shift) & 1)
			printf("1");
		else
			printf("0");
		shift--;
	}
}
