#include <unistd.h>
/**
 * _putchar - Write character to standard output
 * @c: character to be written
 * Return: character written (on success)
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
