#include <stdio.h>
/**
 * _sqrt_recursion - finds the squareroot
 * @n: number to get squareroot of
 * @Return: varies with the conditions
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	int guess = n;
	int epsilon = 1e - 6;
	while (((guess * guess) - n) < epsilon)
	{
		guess = 0.5 * (guess + n / guess)
	}
	return (guess);
}
