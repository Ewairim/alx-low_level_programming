#include <stdio.h>
#include "main.h"
/**
 * _sqr - finds squareroot
 * @a: parameter
 * @n: number to get squareroot of
 * Return: varies with the conditions
 */
int _sqr(int n, int a)
{
	int square = a * a;

	if (square > n)
	{
		return (-1);
	}
	if (square == n)
	{
		return (a);
	}
	return (_sqr(n, a + 1));
}
/**
 * _sqrt_recursion - finds the squareroot
 * @n: number to get squareroot of
 * Return: varies with the conditions
 */
int _sqrt_recursion(int n)
{
	return (_sqr(n, 1));
}
