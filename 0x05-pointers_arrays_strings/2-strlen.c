#include "main.h"

/**
 * _strlen - calculates the length of a string, excluding the terminating null
 * byte
 * @s: a string
 * Return: length of @s
 */
int _strlen(char *s)
{
	int i, length = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		length = length + 1;
	}
	return (length);
}
