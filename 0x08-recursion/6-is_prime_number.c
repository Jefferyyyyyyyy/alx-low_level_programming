#include "main.h"
/**
 * is_prime_number - funtion returns 1 if the input is a prime number
 * @n: number
 * Return: A prime
*/
int is_prime_number(int n)
{
	return (prime(2, n));
}
/**
 * prime - function returns if a number is prime or not.
 * @i: number ++
 * @n: number check
 * Return: 1 and 0.
*/
int prime(int i, int n)
{
	if (n <= 1)
		return (0);
	else if (i >= n)
		return (1);
	if (n % i != 0 && i != n)
		return (prime(i + 1, n));
	else
		return (0);
}
