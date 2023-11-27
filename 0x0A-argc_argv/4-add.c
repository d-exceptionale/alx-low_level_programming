#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isdigit - Check if a character is a digit
 * @x: The number to be checked
 * Return: 1 for a character that will be a digit or 0 for any else
 */

int _isdigit(char *x)

{

	if (*x >= 48 && *x <= 57)
	{
		return (1);
	}
	return (0);
}


/**
 * main - adds positive numbers.
 * Print the result, followed by a new line
 * If no number is passed to the program, print 0,
 * @argc: argument count
 * @argv: argument vector (array of size argc)
 * Return: 0 (success) or 1 (prints - Error followed by a new line )
 * if one of the number contains a symbol
 */

int main(int argc, char *argv[])
{
	unsigned int sum = 0;
	int i;

	if (argc <= 1)
		printf("0\n");
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (_isdigit(argv[i]) == 1)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}

		printf("%d\n", sum);
	}

	return (0);
}
