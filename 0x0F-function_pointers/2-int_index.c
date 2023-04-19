#include "function_pointers.h"

/**
 * int_index - return index of ans
 * @array: the array to check the number
 * @size: the size of array
 * @cmp: function passed as argument
 *
 * Return: int number
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			j = cmp(array[i]);
			if (j)
				return (i);
		}
	}
	return (-1);
}
