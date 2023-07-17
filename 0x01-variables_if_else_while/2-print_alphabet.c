#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet in lowercase,
 *              followed by a new line using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter;

    /* Print the first half of the alphabet (a to m) */
    for (letter = 'a'; letter <= 'm'; letter++)
    {
        putchar(letter);
    }

    /* Print the second half of the alphabet (n to z) using putchar only once */
    for (letter = 'n'; letter <= 'z'; letter++)
    {
        putchar(letter);
    }

    /* Print a new line using putchar only once */
    putchar('\n');

    return 0;
}

