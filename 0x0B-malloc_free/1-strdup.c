#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string otherwise NULL on failure
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int length, i;

	if (str == NULL)
		return (NULL);
	length = strlen(str);
	dup = malloc(sizeof(char) * (length + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		dup[i] = str[i];

	return (dup);
}
