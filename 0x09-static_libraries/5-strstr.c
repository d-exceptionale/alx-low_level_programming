#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring by finding its first occurence
 * @haystack: the main string to be searched on
 * @needle: the substring to be searched
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *a != '\0')
		{
			a++;
			b++;
		}

		if (*b == '\0')
			return (haystack);
	}

	return (NULL);
}
