#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: 1st string.
 * @s2: 2nd string to be added to first.
 * Return: NULL  on failure, pointer to newly allocated string in memory.
 */

char *str_concat(char *s1, char *s2)
{
	int i = 1, j = 1, k = 0, l = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	s = malloc((i * sizeof(char)) + (j + sizeof(char)) + 1);

	if (s == NULL)
		return (NULL);

	while (k < i)
	{
		s[k] = s1[k];
		k++;
	}

	while (l < j)
	{
		s[k] = s2[l];
		k++;
		l++;
	}

	s[k] = '\0';
	return (s);

}
