#include <stdio.h>
#include "lists.h"

/**
 * beforemain - startup code that executes before main
 * Return: nothing
 */

void __attribute__ ((constructor)) beforemain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
