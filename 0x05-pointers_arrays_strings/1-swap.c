#include <stdio.h>
#include "main.h"
/**
 * swap_int - swap integers
 * @*b: parameter used
 * @*a: another parameter
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
