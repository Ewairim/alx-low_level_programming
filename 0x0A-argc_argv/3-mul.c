#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: parameter
 * @argv: array of astring
 * Return: 0 (success) 1 (error)
 */
int main(int argc, char **argv)
{
	int mul, n, m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n = atoi(argv[1]);
		m = atoi(argv[2]);
		mul = n * m;
		printf("%d\n", mul);
	}
	return (0);
}
