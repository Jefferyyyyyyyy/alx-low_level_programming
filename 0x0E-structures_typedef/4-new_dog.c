#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - function creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of dog
 *
 * Return: A pointer to the newly created struct dog or NULL if memory fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_J;

	new_dog_J = malloc(sizeof(dog_t));
	if (new_dog_J == NULL)
		return (NULL);

	new_dog_J->name = strdup(name);
	new_dog_J->owner = strdup(owner);

	if (new_dog_J->name == NULL || new_dog_J->owner == NULL)
	{
		free(new_dog_J->name);
		free(new_dog_J->owner);
		free(new_dog_J);
		return (NULL);
	}

	new_dog_J->age = age;

	return (new_dog_J);
}
