#include "search_algos.h"
/**
 * linear_search - linear search algo
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to search in the array
 *
 * Return: index of the number
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;
	
	if (*array == NULL)
		return -1;
	while (size > 0)
	{
		if (array[i] == value)
			return i;
		i++;
		size--;
	}
}
		
