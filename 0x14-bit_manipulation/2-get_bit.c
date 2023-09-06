#include "main.h"
/**
 * get_bit - gets value of bit at an index
 * @n: the number to get bit from
 * @index: index to retrieve bit from
 * Return: value at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}
