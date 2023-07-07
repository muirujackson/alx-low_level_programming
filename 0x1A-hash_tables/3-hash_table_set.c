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

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);
	if (!key)
		return (0);
	new->key = key;
	new->value = strdup(value);
	new->next = NULL;


	if (!ht->array[key_index(key, ht->size)])
		ht->array[key_index(key, ht->size)] = new;
	else
	{
		tmp = ht->array[key_index(key, ht->size)];
		while (tmp->next)
		{
			tmp = tmp->next;
		}

		tmp->next = new;
	}

	return 1;
}


