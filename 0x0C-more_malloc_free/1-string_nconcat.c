#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concantecates string
 * @s1: string
 * @s2: string
 * @n: parameter
 * Return: concated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s, i;
	unsigned int length_s1 = strlen(s1);
	char *concat;

	concat = malloc(length_s1 + n + 1);
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < length_s1; i++)
	{
		concat[i] = s1[i];
		for (s = 0; s < n && s2[s] != '\0'; s++)
		{
			concat[length_s1 + s] = s2[s];
		}
	}
	concat[length_s1 + s] = '\0';
	return (concat);
}
