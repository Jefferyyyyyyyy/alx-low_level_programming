#include "main.h"

/**
 * set_bit - function sets the value of a bit to 1 at a given index
 * @n: pointer to the number to modify
 * @index: index of the bit to set to 1, starting from
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	set = 1 << index;
	*n = *n | set;

	return (1);
}
