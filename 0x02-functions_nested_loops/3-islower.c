#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: letter to be checked
 * Return: 1 if @c is lowercase, else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c >= 'b')
		return (1);
	else
		return (0);
}
