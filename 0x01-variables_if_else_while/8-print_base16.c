#include<stdio.h>
/**
 * main - numbers of base 16
 *
 * Return: All 0 (success)
 */
int main(void)
{
	char new;
	int num;

	for (num = 0 ; num < 10 ; num++)
	{
		putchar((num % 10) + '0');
	}
	for (new = 'a' ; new <= 'f'; new++)
	{
		putchar (new);
	}
	putchar('\n');
	return (0);

}
