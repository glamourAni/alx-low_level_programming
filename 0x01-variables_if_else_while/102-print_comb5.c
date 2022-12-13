#include <stdio.h>

/**
 * main - print all possible combinations of two two-digit numbers
 * Return: Always 0
 */

int main(void)
{
	int num1;
	int num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			putchar(num1 / 10 + '0');
			putchar(num1 % 10 + '0');
			putchar(' ');
			putchar(num2 / 10 + '0');
			putchar(num2 % 10 + '0');

			if (num1 == 98 && num2 == 99)
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
