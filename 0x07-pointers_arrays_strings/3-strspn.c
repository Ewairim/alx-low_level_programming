#include "main.h"
/**
 * _strspn - the begining
 * @s: enter
 * @accept: enter
 * Return: 0
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int a = 0;
int b;

	while (*s)
	{
		for (b = 0 ; accept[b] ; b++)
		{
			if (*s == accept[b])
			{
				b++;
				break;
			}
			else if (accept[b + 1] == '\0')
			{
			return (a);
			}
		}
		s++;
	}
	return (a);
}

