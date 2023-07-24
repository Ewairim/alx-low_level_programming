#include "main.h"
#include <string.h>
/**
 * _strlen - returns length of string
 * @s: parameter used
 * Return: length of string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
