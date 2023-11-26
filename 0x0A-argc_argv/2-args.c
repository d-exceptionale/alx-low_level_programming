#include <stdio.h>

/**
 * main - prints all arguments it receives from the command line
 * @argc: number of arguments on the command line
 * @argv: array of size argc
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
