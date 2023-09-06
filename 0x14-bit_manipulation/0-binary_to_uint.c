#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to string with the bits
 * Return: converted number or NULL or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int n = 0;
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (b[n] != '\0')
	{
		if (b[n] == '0' || b[n] == '1')
		{
			num = num << 1;
			num += (b[n] - '0');
			n++;
		}
		else
			return (0);
	}
	return (num);
}
