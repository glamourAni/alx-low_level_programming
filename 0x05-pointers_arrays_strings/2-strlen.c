#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: string
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length = length + 1;
		s++;
	}
	return (length);
}
