#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: triangle represented by #
 */
void print_triangle(int size)
{
	int a = 0, b, hash;

	if (size > 0)
	{
		while (a < size)
		{
			for (b = 0; b < (size - 1) - a; b++)
				_putchar(' ');
			for (hash = 0; hash <= a; hash++)
				_putchar('#');
			a = a + 1;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
