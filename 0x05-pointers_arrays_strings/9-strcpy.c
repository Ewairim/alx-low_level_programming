#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies a string
 * @dest: parameter
 * @src: parameter
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; src[0] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	dest[n++] = '\0';
	return (dest);
}
