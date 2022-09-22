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
	/**
	 * Find the destination string
	 */
	while (*dest != '\0')
	{
		dest++;
	}

	while (n--)
	{
		if (!(*dest++ = *src++))
			return (dest++);
	}
	dest = '\0';

	return (dest);
}
