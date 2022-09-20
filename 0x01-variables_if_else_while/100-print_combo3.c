#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int num1;
	int num2;

	num1 = 0;
	while (num1 <= 8)
	{
		num2 = num1 + 1;
		while (num2 < 10)
		{
			putchar(num1 + '0');
			putchar(num2 + '0');
			if (num1 == 8 && num2 == 9)
				break;

			putchar(',');
			putchar(' ');
			num2 += 1;
		}
		num1 += 1;
	}
	putchar('\n');

	return (0);
}
