#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0(Success) or 1(Fail)
 */
int main(int argc, char *argv[])
{
	int add, num, i;

	add = 0;
	for (num = 1; num < argc; num++)
	{
		for (i = 0; argv[num][i]; i++)
		{
			if (!isdigit(argv[num][i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[num]);
	}
	printf("%d\n", add);

	return (0);
}
