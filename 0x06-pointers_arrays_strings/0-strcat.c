#include "main.h"
/**
 * _strcat - concatenate 2 strings
 * @dest: parameter used
 * @src: parameter used
 * Return: pointer to the resulting sring dest
 */
char *_strcat(char *dest, char *src)
{
	int size = 0;
	int a;

	while (dest[size])
	{
		size++;
	}
	for (a = 0; src[a] != 0; a++)
	{
		dest[size] = src[a];
		size++;
	}
	dest[size] = '\0';
	return (dest);
}
