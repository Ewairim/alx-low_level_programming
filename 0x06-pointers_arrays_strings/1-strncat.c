#include <stdio.h>
#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string appended to
 * @src: string appended
 * @n: parameter
 * Return: reselting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int length = 0;
	int i;

	while (dest[length])
	{
		length++;
	}
	for (i = 0; i < n && src[i] != 0; i++)
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';
	return (dest);
}
