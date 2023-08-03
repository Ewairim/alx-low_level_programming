#include "main.h"
#include <stdio.h>
/**
 * is_prime - finds the prime number
 * @m: parameter
 * @n: the number to check
 * Return: 1 if prime else 0
 */
int is_prime(int n, int m)
{
	if (n < 2)
	{
		return (0);
	}
	if (n % m == 0)
	{
		return (0);
	}
	if (m * m > n)
	{
		return (1);
	}
	return (is_prime(n, m + 1));
}
/**
 * is_prime_number - checks for prime numbers
 * @n: parameter
 * Return: varies
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
