#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies a string, including the terminating null byte
 * from one pointer to another
 * @dest: the destination pointer
 * @src: the sender pointer
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
