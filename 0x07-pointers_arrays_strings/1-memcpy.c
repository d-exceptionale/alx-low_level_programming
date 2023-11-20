#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: first memory area (to be copied to)
 * @src: second memory area (to be copied from)
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
