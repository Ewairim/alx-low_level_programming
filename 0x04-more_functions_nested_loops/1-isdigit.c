#include <unistd.h>
#include "main.h"
/**
 * _isdigit - checks for digit
 * (0 through 9)
 * @c: parameter used
 * Return: 1 (if digit) 0 (if not)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
