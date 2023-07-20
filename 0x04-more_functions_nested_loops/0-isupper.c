#include <unistd.h>
#include "main.h"
/**
 * _isupper - checks for uppercase
 * @c: parameter used
 * Return: 1 (if uppercase) 0 (if not)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
