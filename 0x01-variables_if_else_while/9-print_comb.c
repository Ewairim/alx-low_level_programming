#include<stdio.h>
/**
 * main - combination of single-digit numbers
 *
 * Return: All 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
	putchar ((n % 10) + '0');
	if (n != 9)
	{
	putchar (',');
	putchar (' ');
	}
	}
	putchar('\n');
	return (0);
}
