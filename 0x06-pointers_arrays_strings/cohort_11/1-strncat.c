#include <stdio.h>
#include "main.h"

/**
 * _strncat - appends the src string to the dest string, overwriting the
 * terminating null byte (\0) at the end of dest, and then
 * adds a terminating null byte
 * @dest: a pointer to the string to be appended on
 * @src: source string to be appended to dest
 * @n: number of bytes from src to be appended to ded
 * Return: A pointer to the dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	/* find the length of dest*/
	while (dest[dest_len] != '\0')
	{
		dest_len = dest_len + 1;
	}
	/* get the n src bytes*/
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
