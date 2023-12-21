#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcode of its own function.
 * @argc: Number of arguments.
 * @argv: array of arguments.
 * Return: (0) success!
 */

int main(int argc, char *argv[])
{
	int ct, bytes;
	int (*addr)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (ct = 0; ct < bytes; ct++)
	{
		opcode = *(unsigned char *)addr;

		printf("%.2x", opcode);

		if (ct == bytes - 1)
			continue;

		printf(" ");

		addr++;
	}
	printf("\n");

	return (0);
}
