#include "main.h"

/**
 * print_alphabet - prints letters of the alphabet in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z';)
	{
		_putchar(lowercase);
		lowercase = lowercase + 1;
	}
	_putchar('\n');
}
