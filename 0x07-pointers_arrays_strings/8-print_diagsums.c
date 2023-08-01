#include "stdio.h"
#include "main.h"
/**
 * print_diagsums - start of my program
 * @a: enter
 * @size: enter
 * Return: 0
*/

void print_diagsums(int *a, int size)
{
	int sum = 0, add = 0, b;

	for (b = 0 ; b < size ; b++)
	{
		sum = sum + a[b * size + b];
	}
	for (b = size - 1 ; b >= 0 ; b--)
	{
		add = add + a[b * size + (size - b - 1)];
	}
	printf("%d, %d\n", sum, add);
}

