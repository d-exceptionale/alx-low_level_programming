#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - program that performs simple operations
 * @argc: number of elements passed from shell
 * @argv: array gotten from shell
 * Return: calculated number
 */

int main(int argc, char **argv)
{
	int num1, num2;
	int (*operation)(int, int);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operation = get_op_func(argv[2]);

	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operation(num1, num2));
	return (0);
}
