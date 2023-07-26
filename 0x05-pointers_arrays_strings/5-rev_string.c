#include "main.h"
/**
 * rev_string - reverse a string
 * @s: parameter used
 */
void rev_string(char *s)
{
	char c;
	int size = 0;
	int num = 0;

	while (s[num++])
	{
		size++;
	}
	for (num = size - 1; num >= size / 2; num--)
	{
		c = s[num];
		s[num] = s[size - num - 1];
		s[size - num - 1] = c;
	}
}
