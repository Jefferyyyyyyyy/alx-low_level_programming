#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the infomation  of dog structure
 * @d: pointer to the struct dog to be printed
 *
 * Description: This funtion prints the information of dog structure,
 * it name,age and owner.
 * If an element of d is NULL, it prints (nil) instead of that element
 * If d is NULL it prints nothing
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
		return;
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
