#include "main.h"
/**
 * _memset - Function that fills memory with a constant byte
 * @s: Pointer to the memory area to be filled
 * @b: The constant byte
 * @n: The number of bytes to fill with the constant byte
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
