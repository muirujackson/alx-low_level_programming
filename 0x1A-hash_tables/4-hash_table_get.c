#include "hash_tables.h"

/**
 * hash_table_get - retrieve value
 *
 * @ht: hash table
 * @key: the key to retrieve value of
 *
 * Return: a string
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	index = key_index((const unsigned char *) key, ht->size);
	tmp = ht->array[index];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	return (NULL);
}

