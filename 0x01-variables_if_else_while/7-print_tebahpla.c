#include <stdio.h>
/**
 * main - prints alphabet in reverse
 *
 * Return: 0 (success)
 */
int main(void)
{
	int alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
