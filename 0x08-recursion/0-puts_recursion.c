#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string
 * @s: parameter used
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	puts(s);
}
