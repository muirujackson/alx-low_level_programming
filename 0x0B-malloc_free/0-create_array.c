#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: Size of array
 * @c: initializer of char
 *
 * Return: Null or pointer
 */
char *create_array(unsigned int size, char c)
{
	int position;
	char *s;

	s = (char *) malloc(size * sizeof(c));
	if (size == 0 || s == NULL)
		return (NULL);
	position = 0;
	while (position < size) /*While for array*/
	{
		*(s  + position) = c;
		position++;
	}
	return (s);
}
