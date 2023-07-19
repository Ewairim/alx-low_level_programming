#include <unistd.h>
#include "main.h"
/**
 * _abs - computes absolute value of an integer
 * @r: parameter used
 * Return: different for each case
 */
int _abs(int r)
{
	int n;

	if (r == 0)
	{
		return (r);
	}
	else if (r < 0)
	{
		n = r * -1;
		return (n);
	}
	else
	{
		return (r);
	}

	return (0);
}
