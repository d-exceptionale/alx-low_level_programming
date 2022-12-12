#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -random number assignment to int (n)
 * Executes and prints
 * Return: should return 0 if it worked
 */
int main(void)
{
	int n;
	scrand(time(0));
	n = rand() -RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%dis zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
