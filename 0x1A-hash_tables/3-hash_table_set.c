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
	hash_node_t *new, *current;
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	/*  Check if the key already exists */
	current = ht->array[index];
	
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			/* Key already exists, update the value */
			free(current->value);
			current->value = strdup(value);
			return 1;
		}
		current = current->next;
	}


	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	if (!ht || !key || *key == '\0' )
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	if (!ht->array[index])
		ht->array[index] = new;
	else
	{
		new->next = ht->array[index];
		ht->array[index] = new;
	}

	return (1);
}
