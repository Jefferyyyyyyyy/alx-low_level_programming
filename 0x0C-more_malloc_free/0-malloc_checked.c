#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function allocates memory using malloc
 * @b: number of bytes
 *
 * Return: pointer to the allocated memory, if mallocs fails
 * the function terminates the process with status 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
