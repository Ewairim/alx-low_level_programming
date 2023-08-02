#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - raises x to power y
 * @x: value to raise
 * @y: value to raise by
 * Return: -1 (error) or raised value of x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
