#include <stdio.h>

/**
 * main - the function
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alph, ALPH;

	for (alph = 'a', alph <= 'z', alph++)

		putchar(alph);

	for (ALPH = 'A', ALPH <= 'Z', ALPH++)
		putchar(ALPH);
	putchar('\n');
	return (0);
}
