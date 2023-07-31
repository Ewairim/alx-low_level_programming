#include "main.h"
#include <stdio.h>
/**
 * -memcpy - function copies memory area
 *  @dest: pointer where to copy
 *  @src: pointer from where to copy
 *  @n: number of bytes in memory to copy
 *  Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;
	char *ptr1 = src;
	char *ptr2 = dest;

	for (a = 0; a < n; a++)
	{
		ptr2[a] = ptr1[a];
		n--;
	}
	return (dest);
}
