#include <stdio.h>
/**
 * main - print base 16numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num;
	char number;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	for (number = 'a'; number <= 'f'; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
