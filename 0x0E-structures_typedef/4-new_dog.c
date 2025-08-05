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
	int i = 0;
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	while (name[i] != '\0')
		i++;

	dog->name = malloc((i + 1) * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);

	dog->age = age;

	i = 0;
	while (owner[i] != '\0')
		i++;

	dog->owner = malloc((i + 1) * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}
