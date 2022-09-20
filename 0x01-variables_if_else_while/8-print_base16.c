#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int hex;
	char letter;

	hex = 0;
	letter = 'a';
	while (hex < 10)
	{
		putchar(hex + '0');
		hex = hex + 1;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
