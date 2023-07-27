#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses content of an array
 * @a: pointer to array
 * @n: number of element in the array
 */
void reverse_array(int *a, int n)
{
	int j, k = 0;

	for (j = n - 1; j > n / 2; j--)
	{
		k = a[n - 1 - j];
		a[n - 1 - j] = a[j];
		a[j] = k;
	}
}
