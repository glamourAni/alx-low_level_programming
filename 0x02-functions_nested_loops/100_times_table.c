#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the total number of times table to be printed
 */
void print_times_table(int n)
{
	if ((n < 0) || (n > 15))
	{
		return;
	}
		int a, b, result;

		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				result = a * b;
				if (result > 9)
				{
					if (result < 100)
						putchar(' ');
					putchar((result / 10) + '0');
					putchar((result % 10) + '0');
					if (b == 9)
						break;
					putchar(',');
					putchar(' ');
				}
				else
				{
					if (b == 0)
						putchar('0');
					else
					{
						putchar(' ');
						putchar(' ');
						putchar(result);
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
}

int main(void)
{
	print_times_table(5);
	print_times_table(10);
	return (0);
}
