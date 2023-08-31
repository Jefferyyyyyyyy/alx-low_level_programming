#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to a string containing a binary number.
 *
 * Return: the converted unsigned integer
 * or 0 if there are non-binary characters
 * in the string or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = (result << 1) | (b[i] - '0');
		i++;
	}
	return (result);
}
