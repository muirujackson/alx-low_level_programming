#include "main.h"

/**
 * rev_string - reverse string
 * @s : parameter
 * return void
 */
void rev_string(char *s)
{
	int n = _strlen(s);
	char *a_copy = s;

	while (*s != '\0')
	{
		*s = *(a_copy + --n);
		s++;
	}
}
