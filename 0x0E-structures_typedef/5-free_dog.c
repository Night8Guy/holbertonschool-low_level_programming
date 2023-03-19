#include "dog.h"
#include <stdio.h>
/**
* free_dog - frees memory used by dogs
 * @d: struct to free up
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}