#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * starting from 0
 * Return: 0
 */

int main(void)
{
	int single_num;

	single_num = 0;
	while (single_num < 10)
	{
		printf("%d", single_num);
		single_num++;
	}
	printf("\n");

	return (0);
}
