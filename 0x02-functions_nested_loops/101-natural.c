#include <stdio.h>

/**
 * main - prints the sum of multiples of 3 or 5  below 1024
 * Return: 0
 */
int main(void)
{
	int sum_of_multiples, i;

	sum_of_multiples = 0;
	i = 0;
	while (i < 1024)
	{
		if (!(i % 3) || !(i % 5))
		{
			sum_of_multiples += i;
		}
		i++;
	}
	printf("%d\n", sum_of_multiples);
	return (0);
}
