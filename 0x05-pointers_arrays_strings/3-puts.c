#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string
 * @str: parameter used
 */
void _puts(char *str)
{
	char c;

	while ((c = *str++) != '\0')
	{
		_putchar(c);
	}
	_putchar('\n');
}
