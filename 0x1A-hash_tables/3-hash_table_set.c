#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: the hash table
 * @key: key to be saved
 * @value: value associated with the key
 *
 * Return: 1 if succeeded or 0 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	hash_node_t *tmp;
	int index;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	if (!key)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);

	if (!ht->array[index])
		ht->array[index] = new;
	else
	{
		tmp = ht->array[index];
		while (tmp->next)
		{
			tmp = tmp->next;
		}

		tmp->next = new;
	}

	return 1;
}


