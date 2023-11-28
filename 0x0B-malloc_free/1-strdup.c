#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *   _strcpy - Copy a string
 *   @dest: Destination value
 *   @src: Source value
 *   Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}

/**
 * _strdup - returns a pointer to newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: str to be copied
 * Return: NULL if there's no string, pointer to duplicated string on success
 * and NULL if insufficient memory was available.
 */

char *_strdup(char *str)
{
	int i;
	char *mstr;

	if (*str == NULL)
		return (NULL);
	for (i = 0; str != '\0'; i++)
		str++;

	mstr = (char *)malloc(i * sizeof(char));

	if (mstr == NULL)
		return (NULL);

	_strcpy(mstr, str);
	return (mstr);



}
