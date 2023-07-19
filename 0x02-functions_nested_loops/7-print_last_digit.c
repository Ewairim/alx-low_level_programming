#include <unistd.h>
#include "main.h"
/**
 * print_last_digit - prints last digit
 * @n: parameter used
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (n < 0)
	{
		m = m * -1;
	}
	_putchar(m + '0');
	return (m);
}
