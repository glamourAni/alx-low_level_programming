#include <stdio.h>

/**
 * main - Reurns the lowercase letters of
 * the alphabet
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

	putchar('\n'); /* trailing "\n" needed in
			*  standard C
			*/
	return (0);
}
