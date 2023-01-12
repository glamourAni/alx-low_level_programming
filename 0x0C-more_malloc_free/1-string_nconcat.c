#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to use from s2
 *
 * Return: pointer to new concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    if (s1 == NULL)
    {
        s1 = "";
    }
    if (s2 == NULL)
    {
        s2 = "";
    }

    unsigned int len1 = 0, len2 = 0;
    while (s1[len1])
    {
        ++len1;
    }
    while (s2[len2])
    {
        ++len2;
    }

    if (n >= len2)
    {
        n = len2;
    }

    char *result = malloc(len1 + n + 1);
    if (result == NULL)
    {
        return NULL;
    }

    for (unsigned int i = 0; i < len1; ++i)
    {
        result[i] = s1[i];
    }
    for (unsigned int i = 0; i < n; ++i)
    {
        result[i + len1] = s2[i];
    }
    result[len1 + n] = '\0';

    return result;
}

