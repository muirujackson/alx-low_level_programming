<<<<<<< HEAD
#include"main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *
*/

void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; line <= 9; ++line)
	{
		for (ch = 'a'; ch <= 'z'; ++ch)
			_putchar(ch);
		_putchar('\n');
	}
}
=======
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
>>>>>>> f8bebc06d67ab23e894610690ab8ba648e90b734
