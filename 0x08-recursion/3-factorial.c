#include "main.h"
#include <stdio.h>
/**
 * factorial - calculates factorial 
 * @n: varaible name of number
 * Return: -1(error) or factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
