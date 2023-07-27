#include "main.h"
/**
 * _strcat - Concatenates two strings.
 * @dest: destination for first string to be appended
 * @src: first string appends to the second
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;

	/* Move the pointer to the end of the dest */
	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}

	/* append the characters of src to dest */
	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}

	/* add the terminating null byte */
	*dest_ptr = '\0';

	return (dest);
}
