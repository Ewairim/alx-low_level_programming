#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - the function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, l_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_digit = (n % 10);
	if (l_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, l_digit);
	else if (l_digit == 0)
		printf("Last digit of %d is %d and is equal to 0\n", n, l_digit);
	else if (l_digit < 6)
		printf("Last digit of %d is %d and is less than 6 not 0\n", n, l_digit);
	return (0);
}
