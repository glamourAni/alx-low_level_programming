#include "main.h"

/**
 * print_alphabet_x10 - prints lowercased alphabets x10
 * Return: void
 */
void print_alphabet_x10(void)
{
	char letter;
	int i = 0;

	while (i < 10)
	{
		for (letter = 'a'; letter <= 'z';)
		{
			_putchar(letter);
			letter += 1;
		}
		_putchar('\n');
		i += 1;
	}
}
