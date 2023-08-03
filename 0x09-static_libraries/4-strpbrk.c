#include "main.h"
/**
 * _strpbrk - locate first occurence in a string
 * @s: string to search
 * @accept: string containing acceptable bytes
 *
 * Return: Always (0) success
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}
	return ('\0');
}
