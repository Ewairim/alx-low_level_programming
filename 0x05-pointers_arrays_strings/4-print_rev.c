#include "main.h"
#include <stdio.h>
/**
 * print_rev - reverses a string
 * @s: parameter used
 */
void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	for (count -= 1; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
