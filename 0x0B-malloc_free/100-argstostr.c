#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of a program.
 * each argument should be followed by a new line in the new string.
 * @ac: number of elements in array av
 * @av: argument array
 * Return: pointer to concatenated string or NULL if it fails.
 * NULL if ac == 0 or av == NULL
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int i = 0, sx = 0, j = 0, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		while (av[i][j])
		{
			sx++;
			j++;
		}

		j = 0;
		i++;
	}

	s = malloc((sizeof(char) * sx) + ac + 1);

	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			s[k] = av[i][j];
			k++;
			j++;
		}

		s[k] = '\n';

		j = 0;
		k++;
		i++;
	}

	k++;
	s[k] = '\0';
	return (s);
}
