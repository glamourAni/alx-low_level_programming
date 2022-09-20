#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit
 * numbers
 * Return: 0
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		putchar((num % 10) + '0');
		num++;
		if (num > 9)
			break;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
