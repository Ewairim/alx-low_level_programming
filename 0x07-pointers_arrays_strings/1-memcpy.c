#include "main.h"
/**
 * _memcpy - this will copy my memory area
 * @dest: my storage
 * @src: the copied one
 * @n: my bytes
 * Return: the copied memory
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int s = 0, t = n;

	for (; s < t ; s++)
	{
	dest[s] = src[s];
	n--;
	}
	return (dest);
}

