#include <stdio.h>
#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @size: size of both width and length
 * Return: a square made of '#'
 */
void print_square(int size)
{
	int a = 0, b;

	if (size <= 0)
		_putchar('\n');
	while (a < size)
	{
		b = 0;
		while (b < size)
		{
			_putchar('#');
			b = b + 1;
		}
		_putchar('\n');
		a = a + 1;
	}
}
