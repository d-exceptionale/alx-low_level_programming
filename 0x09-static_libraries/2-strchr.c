#include "main.h"
#include <stddef.h>

/**
 * _strchr - a function that locates a character in a string
 * @s: string to be searched
 * @c: character to be searched for in string s
 * Return: pointer to first occurence of char c in string s.
 */

char *_strchr(char *s, char c)
{
	int i = 0, b = 0;

	while (s[b] != '\0')
		b++;
	for (; i <= b; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return (NULL);
}
