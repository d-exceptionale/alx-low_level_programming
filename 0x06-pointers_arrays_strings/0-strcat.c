#include "main.h"
#include <stdio.h>

/**
 * _strcat - prints a function that concatenates two strings
 * @dest: destination
 * @src: sourcd
 * Return: pointer to resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int len_dest = 0, i;

	for (; dest[len_dest] != '\0' ; len_dest++)
		continue;
	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[len_dest] = src[i];
		len_dest++;
	}

	dest[len_dest] = '\0';
	return (dest);
}
