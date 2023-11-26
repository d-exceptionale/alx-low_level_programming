#include <stdio.h>

/**
 * main - prints number of arguments passed into it
 * @argc: number of command line arguments
 * @argv: Array of size argc
 * Return: 0 (success)
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
