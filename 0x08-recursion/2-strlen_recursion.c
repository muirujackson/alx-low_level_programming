#include "main.h"

/**
 * _strlen_recursion - count string length
 * @s: string to count length
 *
 * return: void
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
		return 1;
	i = 0;
	s = (s + 1);
	return (i + _strlen_recursion(s));
}
