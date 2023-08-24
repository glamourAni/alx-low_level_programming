#include "main.h"

/**
 * rev_string - reverses a string
 * @s: a string
 */
void rev_string(char *s)
{
	/* find the end of the string */
	char *p = s;

	while (*p)
		p++;
	p--;

	/* swap the characters starting from the beginning and */
	/* end of the string */
	while (s < p)
	{
		char temp = *s;
		*s = *p;
		*p = temp;
		s++;
		p--;
	}
}
