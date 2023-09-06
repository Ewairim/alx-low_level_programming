#include "main.h"
/**
 * print_binary - prints binary representation of a number
 * @n: integer to convert
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask, print;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	mask = 1UL << (sizeof(unsigned long int) *  8 - 1);
	print = 0;
	while (mask > 0)
	{
		if ((mask & n) != 0)
		{
			_putchar('1');
			print = 1;
		}
		else if (print)
			_putchar('0');
		mask >>= 1;
	}
}
