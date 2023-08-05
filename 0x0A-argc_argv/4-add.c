#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - checks for digit
 * @argc: parameter
 * @argv: parameter
 * Return: varies with conditions
 */
int main(int argc, char **argv)
{
	int n, i = 0;
	char *arg;
	int sum = 0;

	if (argc > 1)
	{
		for (n = 1; n < argc; n++)
		{
			arg = argv[n];

			while (arg[i])
			{
				if (!isdigit(arg[i]))
				{
					printf("Error\n");
					return (1);
				}
				i++;
			}
			sum = sum + atoi(arg);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
