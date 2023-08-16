#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function frees memory for a dog structure
 * @d: pointer to the dog structure to be freed
 *
 * Description: This function frees the memory used for dog structure,
 * including the memory for the name and owner strings
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
		return;
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
