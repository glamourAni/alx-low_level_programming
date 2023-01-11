#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, mul;

	if (argc == 3)
	{
		arg1 = argv[1];
		arg2 = argv[2];
		mul = arg1 * arg2;
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1)'
	}
}

