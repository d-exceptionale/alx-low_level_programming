#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: str to be copied
 * Return: NULL if there's no string, pointer to duplicated string on success
 * and NULL if insufficient memory was available.
 */

char *_strdup(char *str)
{
	int i = 1, j = 0;
	char *mstr;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;

	mstr = (char *)malloc((i * sizeof(char)) + 1);

	if (mstr == NULL)
		return (NULL);
	while (j < i)
	{
		mstr[j] = str[j];
		j++;
	}

	mstr[j] = '\0';
	return (mstr);

}
