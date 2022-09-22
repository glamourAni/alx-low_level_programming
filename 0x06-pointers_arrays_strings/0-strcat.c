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
	int i;

	/* get byte size for string */
	int j = sizeof(src);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + j] = src[i];
	}

	/* add null termination */
	dest[i + j] = '\0';

	return (dest);
}

/**
 * main - check the code
 * Return: 0
 */
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	printf("%s\n", s1);
	printf("%s", s2);
	ptr = _strcat(s1, s2);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);
	return (0);
}
