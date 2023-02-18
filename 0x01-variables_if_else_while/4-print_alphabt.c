#include <stdio.h>
/**
 * main - the function
 *
 * Return: All 0 (success)
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph == 'q' || alph == 'e')
			continue;
		putchar(alph);
	}

	putchar('\n');
	return (0);
}
