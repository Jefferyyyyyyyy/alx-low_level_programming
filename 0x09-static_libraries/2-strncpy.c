#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: destination of source string to be appended
 * @src: source string
 * @n: Maximum number of characters to copy
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	/* Copy characters from src to dest of most n characters */
	while (n > 0 && *src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}
	/* if n is greater than the lenght of src,stop and end with null bytes */
	while (n > 0)
	{
		*dest_ptr = '\0';
		dest_ptr++;
		n--;
	}
	return (dest);
}
