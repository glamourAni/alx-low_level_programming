#include <stdio.h>

/**
 * main - prints the first fibonacci numbers, starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	long int previous, current, sum, i;

	previous = 1;
	current = 2;
	printf("%li, %li", previous, current);
	i = 2;
	while (i < 50)
	{
		sum = previous + current;
		printf(", %li", sum);
		previous = current;
		current = sum;
		i = i + 1;
	}
	printf("\n");

	return (0);
}
