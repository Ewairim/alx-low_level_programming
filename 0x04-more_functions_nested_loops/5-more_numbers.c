#include <unistd.h>
#include "main.h"
/**
 * more_numbers - print 0 through 14 ten times
 */
void more_numbers(void)
{
	int num;
	int b;

	for (num = 0; num <= 9; num++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar((b / 10) + '0');
			}
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}
