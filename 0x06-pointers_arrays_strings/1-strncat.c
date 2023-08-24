#include "main.h"

/**
 * _strncat - concatenates two strings by using at most @n bytes from the
 * source string
 * @dest: destination string
 * @src: source string
 * @n: n bytes
 * Return: a pointer to the resulting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < n && (src[i] != '\0'); i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';

	return (dest);
}
