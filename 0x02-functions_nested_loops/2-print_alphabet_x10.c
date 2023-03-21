#include "main.h"

/**
 * 
 * print alphabet a to z ten times
 *
 */

void print_alphabet_x10()
{
	int i = 0;

	while (i < 10)
	{
		print_alphabet();
		i++;
	}
	_putchar('\n');
}
