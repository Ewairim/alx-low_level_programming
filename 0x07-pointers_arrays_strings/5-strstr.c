#include "main.h"
/**
 * _strstr- my code
 * @haystack: enter
 * @needle: enter
 * Return: 0
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0' ; haystack++)
	{
		char *m = haystack;
		char *n = needle;

		while (*m == *n && *n != '\0')
		{
			m++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (0);
}

