#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of a number and tells whether
 * it's greater than 5 or less than 6 or equal to 0.
 * Return: 0
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less thsn 6 and not 0\n",
				n, last_digit);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	return (0);
}
