#include <stdarg.h>

/**
 * sum_them_all - adds all parameters
 * @n: parameter
 * @...: parameter
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list lsum;
	unsigned int a;
	int sum = 0;

	va_start(lsum, n);

	if (n == 0)
		return (0);
	for (a = 0; a < n; a++)
	{
		sum = sum + va_arg(lsum, int);
	}
	va_end(lsum);
	return (sum);
}

