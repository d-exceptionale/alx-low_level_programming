#include "main.h"

/**
 * _strcmp - prints a function that compares two strings
 * @s1: first string to be compared to s2
 * @s2: second string to be compared
 * Return: -15 if s1 < s2, 0 if s1 == s2 and 15 if s1 > s2.
 */

int _strcmp(char *s1, char *s2)
{
	int len_s1 = 0, len_s2 = 0, i, j, retval;

	for (i = 0; s1[i] != '\0'; i++)
		len_s1++;
	for (j = 0; s2[j] != '\0'; j++)
		len_s2++;
	if (len_s1 < len_s2)
		retval = -15;
	else if (len_s1 > len_s2)
		retval = 15;
	else
		retval = 0;
	return (retval);
}
