#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: contains the main string to be searched upon.
 * @accept: contains tye string or byte that will be searched.
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or Null if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
				return (s + i);
			j++;
		}
		i++;
	}

	return (NULL);
}
