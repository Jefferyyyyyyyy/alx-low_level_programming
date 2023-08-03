#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: destination for first string to be appended
 * @src: first string appends to the second
 * @n: use most bytes from src
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	/* Move the pointer to the end of the dest */
	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}

	/* append the characters of src to dest */
	while (*src != '\0' && n > 0)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}

	/* add the terminating null byte */
	*dest_ptr = '\0';

	return (dest);
}
