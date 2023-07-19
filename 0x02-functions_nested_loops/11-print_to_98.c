#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints to 98
 * @n: parameter
 */
void print_to_98(int n)
{
	int num;

	num = n;
	if (num >= 98)
	{
		for (num = n; num >= 98; num--)
		{
			if (num != 98)
			{
				printf("%d, ", num);
			}
			if (num == 98)
			{
				printf("%d\n", num);
			}
		}
	}
	else if (num == 98)
	{
		printf("%d\n", num);
	}
	else if (num <= 98)
	{
		for (num = n; num <= 98; num++)
		{
			if (num != 98)
			{
				printf("%d, ", num);
			}
			if (num == 98)
			{
				printf("%d\n", num);
			}
		}
	}
}
