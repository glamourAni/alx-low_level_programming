#include <stdio.h>

/**
 * main - Reurns the letters of the alphabet in
 * lowercase followed by the uppercase
 * Return: 0
 */
int main(void)
{
	char lowercase;

	lowercase = 'a';
	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase = lowercase + 1;
	}

	lowercase = 'A';
	while (lowercase <= 'Z')
	{
		putchar(lowercase);
		lowercase = lowercase + 1;
	}

	putchar('\n'); /* trailing "\n" needed in
			*  standard C
			*/
	return (0);
}

