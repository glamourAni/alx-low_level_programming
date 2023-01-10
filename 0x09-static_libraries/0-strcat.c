#include "main.h"
#include <stdio.h>

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
	int i, j;

	i = 0;/* stores the length of dest*/
	j = 0;/* stores the length of src*/

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';

	return (dest);
}
