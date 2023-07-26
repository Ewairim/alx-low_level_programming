#include "main.h"
#include <string.h>
/**
 * _strlen - returns length of string
 * @s: parameter used
 * Return: length of string.gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_rev.c -o 4-print_rev
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
