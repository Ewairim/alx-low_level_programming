#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints n times table
 * @n: parameter used
 */
void print_times_table(int n)
{
	int i, j, k, l, m, p, o, q, r;
	
	if (n < 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (k > 99)
				{
					p = k % 100;
					o = (k - p) / 100;
					q = p % 10;
					r = (p - q) / 10;
					_putchar(44);
					_putchar(32);
					_putchar(o + '0');
					_putchar(r + '0');
					_putchar(q + '0');
				}
				else if (k > 9 && k <= 99)
				{
					l = k % 10;
					m = (k - l) / 10;
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar(m + '0');
					_putchar(l + '0');
				}
				else
				{
				if (j != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar(32);
				}
					_putchar(k + '0');
				}
			}
			_putchar('\n');
		}
	}
}
