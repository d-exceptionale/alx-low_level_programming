#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: struct dog to be freed
 */

void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}