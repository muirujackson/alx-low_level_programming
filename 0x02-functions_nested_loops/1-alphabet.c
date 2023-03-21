#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 *
*/

void print_alphabet(void)
{
	int i, j = 'a';

	for (i = 0; i < 26; i++)
		_putchar( i +j);
	_putchar('\n');

}
