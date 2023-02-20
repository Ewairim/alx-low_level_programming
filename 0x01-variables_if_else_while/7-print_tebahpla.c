#include <stdio.h>
/**
 * main - reverse alphabets
 *
 * Return: All 0 (success)
 */
int main(void)
{
	char reverse;

	for (reverse = 'z'; reverse >= 'a'; reverse--)
	{
		putchar(reverse);
	}
	putchar('\n');
	return (0);
}

