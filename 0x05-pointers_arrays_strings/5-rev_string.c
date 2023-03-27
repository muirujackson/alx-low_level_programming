#include "main.h"

/**
 * rev_string - reverse string
 * @s : parameter
 * return void
 */
void rev_string(char *s)
{
	int n = 0, i = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	char *a_copy[] = s;

	while (s[i] != '\0')
	{
		s[i] = a_copy[--n];
		i++;
	}
}
