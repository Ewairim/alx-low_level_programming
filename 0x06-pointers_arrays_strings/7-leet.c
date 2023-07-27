#include "main.h"
#include <stdio.h>

/**
 * leet - ecode the text
 * leet: encoder function
 * @n: input
 * Return: n value
*/

char *leet(char *n)
{
	int a, b;
	char array1[] = "aAeEoOtTlL";
	char array2[] = "4433007711";

	for (a = 0 ; n[a] != '\0' ; a++)
	{
		for (b = 0 ; b < 10 ; b++)
		{
			if (n[a] == array1[b])
			{
				n[a] = array2[b];
			}
		}
	}
	return (n);
}
