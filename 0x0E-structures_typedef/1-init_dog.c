#include "dog.h"
#include <stddef>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: the variable of type dog to be initialized
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
