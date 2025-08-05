#include <stdlib.h>
#include <stddef.h>
#include "dog.h"
#include "_strcpy.c"

/**
 * new_dog - creates a new dog
 * @name:  name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: the newly created dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}
