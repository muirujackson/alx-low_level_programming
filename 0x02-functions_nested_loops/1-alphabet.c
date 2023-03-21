#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}

void print_alphabet(void)
{
	int i, j = 'a';

	for(i = 0; i < 26; i++)
		_putchar(i+j);
	_putchar('\n');

}
