#include <stdio.h>

/**
 * main - print all single digit numbers of base 10
 * using putchar
 * Return:   0
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		putchar(num + '0');
		num += 1;
	}
	putchar('\n');

	return (0);
}
