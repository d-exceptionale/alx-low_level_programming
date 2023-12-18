#include <stdio.h>
#includw "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog
 */

void print_dog(struct dog *d)
{
	if ((*d).name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s\n", (*d).name);

	if ((*d).age == NULL)
		printf("Age: (nil)");
	else
		printf("Age: %f\n", (*d).age);

	if ((*d).owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %f\n", (*d).owner);
}
