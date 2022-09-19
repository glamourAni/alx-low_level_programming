#include <stdio.h>

/**
 * main - prints all letters of the alphabet
 * except q and e
 * Return: 0
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet == 'q' || alphabet == 'e')
		{
			/* Skip the letters */
			alphabet += 1;
			continue;
		}
		putchar(alphabet);
		alphabet += 1;
	}
	putchar('\n');

	return (0);
}
