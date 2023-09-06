#include "main.h"
/**
 * set_bit - sets value of bit to 1
 * @n: pointer to number to set bit in
 * @index: index of the bit to set
 * Return:  -1 if error else 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1UL << index;
	*n |= mask;
	return (1);
}
