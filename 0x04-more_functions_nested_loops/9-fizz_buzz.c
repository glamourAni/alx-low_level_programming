#include <stdio.h>

/**
 * main - prints numbers 1 - 100, but for multiples of 3 and multiples of 5
 * print Fizz and Buzz respectively instead of the number. For
 * multiples of both 3 and 5, it prints FizzBuzz.
 * Return: 0
 */
int main(void)
{
	int num = 1;

	while (num <= 100)
	{
		if (!(num % 15))
		{
			printf(" FizzBuzz");
		}
		else if (!(num % 3))
		{
			printf(" Fizz");
		}
		else if (!(num % 5))
		{
			printf(" Buzz");
		}
		else
		{
			if (num > 1)
				printf(" %i", num);
			else
				printf("%i", num);
		}
		num = num + 1;
	}
	printf("\n");
	return (0);
}
