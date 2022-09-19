#include <stdio.h>

/**
 * main - Reurns the lowercase letters of
 * the alphabet
 * Return: 0
 */
int main(void)
{
	int lowercase;

	lowercase = "a";
	while (lowercase <= "z")
	{
		lowercase += lowercase;
		putchar(lowercase);
	}

	putchar("\n"); /* trailing "\n" needed in
			*  standard C
			*/
	return (0);
