#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet in lowercase,
 *              followed by the alphabet in uppercase,
 *              and a new line using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase, uppercase;

	/* Print the alphabet in lowercase */
	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}

	/* Print the alphabet in uppercase */
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}

	/* Print a new line */
	putchar('\n');

	return 0;
}

