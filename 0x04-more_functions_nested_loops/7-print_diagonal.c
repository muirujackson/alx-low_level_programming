#include "main.h"

/**
 * print_diagonal - print slash
 * @n: params
 */

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 1; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if(i == j)
			{
				_putchar(92);
				break;
			}
			_putchar(' ');
		}
			_putchar('\n');
	}
	_putchar('\n');
}
