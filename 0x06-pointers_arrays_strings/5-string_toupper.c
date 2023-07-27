#include <stdio.h>
#include "main.h"
/**
 * string_toupper - changes lower to uppercase
 * @str: parameter
 * Return: changed string
 */
char *string_toupper(char *s)
{
	int j = 0;

	while (s[j])
	{
		if (s[j] >= 'a' && s[j] <= 'z')
		{
			s[j] -= 32;
		}
		j++;
	}
	return (s);
}
