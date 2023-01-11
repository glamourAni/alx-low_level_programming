#include  <stdio.h>

/**
 * main - prints the number of arguments ppassed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0(Success)
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	int args = (argc - 1);

	printf("%d\n", args);

	return (0);
}
