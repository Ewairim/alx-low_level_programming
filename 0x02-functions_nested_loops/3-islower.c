#include <unistd.h>
#include "main.h"

/**
 * _islower - checks if c is lowercase
 *
 * Return: 1 (If lower) 0 (if not)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
