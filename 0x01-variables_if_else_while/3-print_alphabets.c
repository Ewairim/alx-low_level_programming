#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alph;
	char ALPH;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	for (ALPH = 'A'; ALPH <= 'Z'; ALPH++)
	{
		putchar(ALPH);
	}
	putchar('\n');
	return (0);
}
