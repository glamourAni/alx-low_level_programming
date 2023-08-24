#include "main.h"

/**
 * _strncpy - copies at most n bytes of the string pointed to by @src including
 * the terminating null byte, to the string pointed to by dest
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of the @src string to be copied into the @dest string
 * Return: a pointer to @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && (src[i] != '\0'); i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
