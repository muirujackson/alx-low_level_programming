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
	unsigned long int index;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	if (!ht || !key || *key == '\0' || !value)
		return (0);
	new->key = strdup(key);
	if (!new->key)
		return (0);
	new->value = strdup(value);
	if (!new->key)
		return (0);
	new->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);

	if (!ht->array[index])
		ht->array[index] = new;
	else
	{
		new->next = ht->array[index];
		ht->array[index] = new;
	}

	return (1);
}
