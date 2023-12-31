#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function prints a name
 * @name: name to be printed
 * @f: pointer to a function that prints a string
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
