#include "main.h"

/**
 * _sqrt_recursion -  calculates the square root of a number
 * @n: number to find square root
 * Return: number
*/
int _sqrt_recursion(int n)
{
	return (find_sqrt(0, n));
}
/**
 * find_sqrt - calculates the square of a number
 * @j: number
 * @n: number
 * Return: -1'
*/
int find_sqrt(int j, int n)
{
	if (j * j == n)
		return (j);
	else if (j < n)
	{
		return (find_sqrt(j + 1, n));
	}
	else
		return (-1);
}
