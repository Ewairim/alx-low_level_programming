#include "main.h"
#include <stdio.h>
/**
 * print_array - print elements of an array
 * @a: parameter used
 * @n: parameter used
 */
void print_array(int *a, int n)
{
	int b = 0;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
