#include <stdlib.h>
#include <stddef.h>
#include "dog.h"

/**
 * free_dog - frees a dog variable
 * @d: the dog variable that needs to be freed
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
