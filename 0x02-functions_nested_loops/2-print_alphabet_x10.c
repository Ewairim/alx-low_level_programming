#include <unistd.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10 times in lowercase
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	int n;
	char a;

	for (n = 1; n <= 10; n++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
