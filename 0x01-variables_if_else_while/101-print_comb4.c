#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible different combinations of three digits
 *              in ascending order, separated by commas, and a space
 *              using putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j, k;

    /* Loop for the first digit (i) */
    for (i = 0; i <= 7; i++)
    {
        /* Loop for the second digit (j) */
        for (j = i + 1; j <= 8; j++)
        {
            /* Loop for the third digit (k) */
            for (k = j + 1; k <= 9; k++)
            {
                /* Print the three digits using putchar */
                putchar(i + '0');
                putchar(j + '0');
                putchar(k + '0');

                /* Check if it's the last combination */
                if (!(i == 7 && j == 8 && k == 9))
                {
                    /* Print comma and space */
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    /* Print a new line */
    putchar('\n');

    return 0;
}

