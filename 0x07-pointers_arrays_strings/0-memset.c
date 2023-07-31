#include "main.h"
#include <stdio.h>
/**
 * _memset - fill memory with a constant byte
 * @s: pointer to memory adress to be filled
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p;
	
	char *ptr = s;
	char a = b;
	for (p = 0; p < n; p++)
	{
		*ptr++ = a;
	}
	return (ptr);
}
