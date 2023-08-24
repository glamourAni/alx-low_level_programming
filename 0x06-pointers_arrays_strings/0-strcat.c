#include "main.h"

/**
 * _strcat - appends the src string to the dest string, overwriting the null
 * terminating byte at the end of dest, then adds a null terminating byte
 * @dest: destinaton string. it must be large enough to hold the result
 * @src: source string
 * Return: a poointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (*(dest + len) != '\0')
	{
		len++;
	}
	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';

	return (dest);
}
