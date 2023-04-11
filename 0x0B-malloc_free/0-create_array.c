
/**
 * create_array - creates an array of chars
 * @size: Size of array
 * @c: initializer of char
 *
 * return: Null or pointer
 */
char *create_array(unsigned int size, char c)
{
	char *s;

	s = malloc(sizeof(char)*size)
	if (size == 0 || s == NULL)
		return (NULL);
	return (s);
}
