#include "search_algos.h"

/**
 * print_array - print the array searching
 * @left: pointer on the left
 * @right: pointer on the right
 * @array: array to search
 *
 * Return: void
 */
void print_array(int *array, int left, int right)
{
	int i;

	printf("Searching in array: ");
	for (i = left; i < right; i++)
	{
		printf("%d", array[i]);
		if (i != right - 1)
			printf(", ");
	}
	printf("\n");
}
/**
 * binary_search - search value in a sorted array of integer
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: The index of the value or -1 when not found
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size,  mid;

	if (array == NULL || size == 0)
		return (-1);
	while (left < right)
	{
		print_array(array, left, right);
		mid = (left + right) / 2;

		if (array[mid] <= value)
			if (array[mid] == value)
			{
				left = mid;
				print_array(array, left, right);
				return (left);
			}
			else
				left = mid + 1;
		else
			if (array[mid] == value)
			{
				right = mid;
				print_array(array, left, right);
				return (right);
			}
			else
				right = mid - 1;
	}
	return (-1);
}
