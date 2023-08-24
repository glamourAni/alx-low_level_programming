#include "main.h"

/**
 * _strcmp - commpares two strings
 * @s1: first string
 * @s2: second string
 * Return: an integer indicating the result of the comparison; positive if s1
 * is greater than s2, negative if s2 is greater than s1 and  0 if s1 and s2
 * are equal
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; )
	{
		if (s1[i] == '\0' || (s2[i] == '\0'))
			break;
		i = i + 1;
	}

	return (s1[i] - s2[i]);
}
