#include "main.h"
/**
 * string_toupper - Change all lowercase to uppercase letters.
 * @str: pointer to the string
 * Return: str
*/
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}
	return (str);
}
