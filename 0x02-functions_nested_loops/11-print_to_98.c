#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numebers from n to 98
 * @n: starting point natural number
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d", n);
		if (n < 98)

			printf(", ");

		n++;
	}

	while (n >= 98)
	{
		printf("%d", n);
		if (n > 98)
			printf(", ");
		n--;
	}
	printf("\n");
}
