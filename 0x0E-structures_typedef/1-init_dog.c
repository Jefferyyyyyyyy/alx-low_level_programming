#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer to dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: function initializes the members of a dog structure
 * with name,age and owner provided
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
