#include <stdio.h>
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of size argc
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	int n;

	printf("%s\n", argv[0]);
	if (argc > 1)
	{
		for (n = 0; n < argc; n++)
		{
			printf("%s\n", argv[n]);
		}
	}
	return (0);
}
