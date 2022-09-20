#include <stdio.h>

/**
 * main - prints all possible combinations of three digits
 * Return: 0
 */
int main(void)
{
	int num1;
	int num2;
	int num3;

	num1 = 0;
	while (num1 < 10)
	{
		num2 = num1 + 1;
		while (num2 < 10)
		{
			num3 = num2 + 1;
			while (num3 < 10)
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				putchar(num3 + '0');
				if (num1 == 7 && num2 == 8 && num3 == 9)
					break;
				putchar(',');
				putchar(' ');
				num3 += 1;
			}
			num2 += 1;
		}
		num1 += 1;
	}
	putchar('\n');

	return (0);
}
