#include <stdlib.h>
#include "dog.h"
#include "dog.h"
#include "dog.h"

/**
 * free_dog - frees a dog variable
 * @d: the dog variable that needs to be freed
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
