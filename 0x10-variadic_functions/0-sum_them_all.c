#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that sums the arguments
 * @n: the number of elements
 *
 * Return: int sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum, i;
       	unsigned int j;

	j = 0;
	sum = 0;

	va_start(ap, n);
	for (i = va_arg(ap, int); j < n; i = va_arg(ap, int))
	{
		sum += i;
		j++;
	}
	return (sum);
}



