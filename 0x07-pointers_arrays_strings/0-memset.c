#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s with
 * the constant byte b
 * @s: pointer to a memory area
 * @b: value to be filled
 * @n: number of bytes to be filled
 * Return: a pointer to s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
