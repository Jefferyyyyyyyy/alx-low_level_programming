#include "main.h"
/**
 * leet - encode into 1337speak
 * @str: the string to be encoded
 * Return: str
 */
char *leet(char *str)
{
	unsigned char *ptr = (unsigned char *)str;
	char leet_map[256] = {0};

	leet_map['a'] = leet_map['A'] = '4';
	leet_map['e'] = leet_map['E'] = '3';
	leet_map['o'] = leet_map['O'] = '0';
	leet_map['t'] = leet_map['T'] = '7';
	leet_map['l'] = leet_map['L'] = '7';

	while (*ptr != '\0')
	{
		if (leet_map[*ptr] != 0)
		{
			*ptr = leet_map[*ptr];
		}
		ptr++;
	}
	return (str);
}
