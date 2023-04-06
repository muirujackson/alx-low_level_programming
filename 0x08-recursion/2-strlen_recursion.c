#include "main.h"

/**
 * _strlen_recursion - count string length
 * @s: string to count length
 *
 * return: int value
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
		return (0);
	i = 1;
	s = (s + 1);
	return (i + _strlen_recursion(s));
}
