#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: number of bytes from s2 to be concatenated
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, ct = 0, i = 0, j = 0;
	char *m;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	for (i = 0; s2[i]; i++)
		len2++;
	for (i = 0; s1[i]; i++)
		len1++;
	if (n >= len2)
		ct = len2 + len1;
	else
		ct = n + len1;

	m = malloc(sizeof(char) * (ct + 1));
	if (m == NULL)
		return (NULL);

	i = 0;
	while (j < ct)
	{
		if (j < len1)
			m[j] = s1[j];
		if (j >= len1)
		{
			m[j] = s2[i];
			i++;
		}
		j++;
	}
	m[j] = '\0';

	return (m);
}
