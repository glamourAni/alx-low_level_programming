#include <stdio.h>

/**
 * main - prints all the arguments it receives
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count = 0;

	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count = count + 1;
	}

	return (0);
}
