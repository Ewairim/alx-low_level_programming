#include "main.h"
/**
 * puts_half - prints half of the string
 * @str: parameter used
 */
void puts_half(char *str)
{
	int l = 0;
	int n;

	while (str[l] != '\0')
	{
		l++;
	}
	if (l % 2 != 0)
	{
		n = (l - 1) / 2;
	}
	else
	{
		n = l / 2;
	}
	for (; n < l; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
