#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory
 * @nmemb: elements of array
 * @size: size
 * Return: varies with conditions
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array;

	array = 0;
	array = malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (array == 0)
		return (NULL);
	return (array);
}
