#include "main.h"
/**
 * _strlen_recursion - length of a string
 * @s: parameter used
 * Return: returns length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
