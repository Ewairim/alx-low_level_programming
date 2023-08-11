#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array
 * @min: least value in the array
 * @max: highest value in the array
 * Return: pointer to the array else NULL
 */
int *array_range(int min, int max)
{
	int *ptr, m;

	if (min > max)
		return (NULL);
	ptr = malloc(((max - min) + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (m = 0; min <= max; m++)
	{
		ptr[m] = min++;

	}
	return (ptr);
}
