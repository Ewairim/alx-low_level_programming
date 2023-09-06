#include "main.h"
/**
 * count_bits - counts bits 1
 * @n: integer
 * Return: count of bits
 */
int count_bits(unsigned int n)
{
	unsigned int count = 0;

	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return (count);
}
/**
 * flip_bits - returns number of bits needed to flip from one number to another
 * @n: integer to be flipped
 * @m: another integer to flip
 * Return: count of needed bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = n ^ m;

	return (count_bits(flip));
}
