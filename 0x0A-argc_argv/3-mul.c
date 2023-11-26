#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers tyat are passed to it
 * @argc: argument count
 * @argv: argument vector (array of size argc)
 * Return: 0(success) or Error followed by newline and 1
 */

int main(int argc, char *argv[])
{
	int a = 0, b = 0;

	if (argc == 3)
	{
		a += atoi(argv[1]);
		b += atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
