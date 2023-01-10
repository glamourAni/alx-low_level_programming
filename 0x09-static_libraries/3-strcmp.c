#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: an integer indicating the result of the comparison
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0'))
	{
		i = i + 1;
	}
	return (s1[i] - s2[i]);
}
