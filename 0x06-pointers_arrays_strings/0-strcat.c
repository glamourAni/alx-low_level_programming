#include "main.h"

/**
 * _strcat - appends the src string to the dest string, overwriting the
 * terminating null byte (\0) at the end of dest, and then
 * adds a terminating null byte
 * @dest: a pointer to the string to be appended on
 * @src: source string to be appended to dest
 * Return: A pointer to the dest string
 */
char *_strcat(char *dest, char *src)
{
	char *i = dest;

	while (*i != '\0')
	{
		i++;
	}
	while (*src != '\0')
	{
		*i = *src;
		i++;
		src++;
	}
	*p = '\0';
	return (dest);
}
