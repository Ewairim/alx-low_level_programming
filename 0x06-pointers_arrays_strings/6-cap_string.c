#include "main.h"
/**
 * cap_string - capitalizes words
 * @s: string
 * Return: resulting string
 */
char *cap_string(char *s)
{
	int k, j;
	char p[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	
	for (k = 0; s[k] != '\0'; k++)
	{
		if (k == 0 && s[k] >= 'a' && s[k] <= 'z')
			s[k] -= 32;
		for (j = 0; j < 13; j++)
		{
			if (s[k] == p[j])
			{
				if (s[k + 1] >= 'a' && s[k] <= 'z')
				{
					s[k + 1] -= 32;
				}
			}
		}
	}
	return (s);
}
