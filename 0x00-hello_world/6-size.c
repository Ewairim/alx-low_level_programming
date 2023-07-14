#include <stdio.h>

/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	float f;
	long int b;

	printf("Size of a char: %lu.\n", (unsigned long)(sizeof(c));
	printf("Size of an int: %lu.\n", (unsigned long)(sizeof(i));
	printf("Size of a long int: %llu\n", (unsigned long long)(sizeof(i));
	printf("Size of long long int: %llu\n", (unsigned long long long)(sizeof(i);
	printf("Size of a float: %lu\n", (unsigned long)sizeof(f));

	return (0);
}
