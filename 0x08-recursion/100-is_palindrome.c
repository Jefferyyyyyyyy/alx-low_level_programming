#include "main.h"

/**
 * is_palindrome - function checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is string, otherwise 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - function returns the length of a string
 * @s: string to calculate the length
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to be check
 * @i: iterator
 * @len: string length
 *
 * Return: 1 if palindrome, otherwise 0
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
