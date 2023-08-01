#include "main.h"

/**
 * _memset - this block has specific value
 * @s: the address
 * @b: the value used
 * @n: number of bytes changed
 * Return: the array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int p = 0;

	for (; n > 0 ; p++)
	{
		s[p] = b;
		n--;
	}
	return (s);
}

