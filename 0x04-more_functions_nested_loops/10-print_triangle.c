#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: parameter used
 */
void print_triangle(int size)
{
	int n, m, p;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n = 0; n < size; n++)
		{
			for (m = size - n; m > 1; m--)
			{
				_putchar(32);
			}
			for (p = 0; p <= n; p++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
