#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 *
 * @size: The size of the array
 * Return: pointer to hash_table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

	hash_table_t *hash = malloc(sizeof(hash_table_t));
	if (!hash)
		return NULL;
	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (!hash->array)
		return (NULL);

	/* initialize the array element with NULL */
	for (i = 0; i < size; i++)
	{
		array[i] = NULL;
	}
	
	hash->size = size;
	
	
	return hash;
}
