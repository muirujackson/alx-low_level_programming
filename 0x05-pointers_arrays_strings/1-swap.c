#include "main.h"

/**
 * swap_int - this function swaps value
 * @a, @b pointer
 * rerurn is void
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
