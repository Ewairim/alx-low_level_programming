#include <unistd.h>
#include "main.h"
/**
 * print_most_numbers - print numbers
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num != 2 && num != 4)
		{
			_putchar((num) + '0');
		}
	}
	_putchar('\n');
}
