#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - execute function provide as argument
 * @array: array with all the elemets
 * @size: the size of the array
 * @action: the function provide as parametter
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}


